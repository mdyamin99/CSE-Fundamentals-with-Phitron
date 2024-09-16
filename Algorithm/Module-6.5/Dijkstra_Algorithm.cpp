//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int dis[10005];
	void dijkstra(int src,vector<vector<int>> v[])
    {
        queue<pair<int,int>> q;
        q.push({src,0});
        dis[src]=0;
        while(!q.empty())
        {
            pair<int,int> parent = q.front();
            q.pop();
            int node = parent.first;
            int cost = parent.second;
            for(auto child:v[node])
            {
                int childNode=child[0];
                int childCost=child[1];
                if(cost+childCost < dis[childNode])
                {
                    dis[childNode] = cost+childCost;
                    q.push({childNode,dis[childNode]});
                }
            }
        }
    }
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        for(int i=0;i<V;i++)
        {
            dis[i]=INT_MAX;
        }
        dijkstra(S,adj);
        vector<int> v;
        for(int i=0;i<V;i++)
        {
            v.push_back(dis[i]);
        }
        return v;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends