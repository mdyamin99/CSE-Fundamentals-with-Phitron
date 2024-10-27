//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Edge
{
    public:
    int u,v,w;
    Edge(int u,int v,int w)
    {
        this->u=u;;
        this->v=v;
        this->w=w;
    }
};
bool cmp(Edge a,Edge b)
{
    return a.w < b.w;
}
class Solution
{
    
	public:
	int par[100005];
	int sz[100005];
	void dsu_init(int n)
	{
	    for(int i=0;i<n;i++)
	    {
	        par[i]=-1;
	        sz[i]=1;
	    }
	}
	int dsu_find(int node)
	{
	    if(par[node]==-1) return node;
	    int leader = dsu_find(par[node]);
	    par[node]=leader;
	    return leader;
	}
	void dsu_union_size(int node1,int node2)
	{
	    int leaderA=dsu_find(node1);
	    int leaderB=dsu_find(node2);
	    if(sz[leaderA] > sz[leaderB])
	    {
	        par[leaderB]=leaderA;
	        sz[leaderA]+=sz[leaderB];
	    }
	    else
	    {
	        par[leaderA]=leaderB;
	        sz[leaderB]+=sz[leaderA];
	    }
	}
	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        dsu_init(V);
        vector<Edge> List;
        for(int i=0;i<V;i++)
        {
            for(auto child:adj[i])
            {
                int u=i;
                int v=child[0];
                int w=child[1];
                List.push_back(Edge(u,v,w));
            }
        }
        
        sort(List.begin(),List.end(),cmp);
        
        int Count=0;
        for(Edge eg:List)
        {
            int leaderA=dsu_find(eg.u);
            int leaderB=dsu_find(eg.v);
            if(leaderA==leaderB)
            {
                continue;
            }
            else
            {
                dsu_union_size(eg.u,eg.v);
                Count+=eg.w;
            }
        }
        return Count;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends