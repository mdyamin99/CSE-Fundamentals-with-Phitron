//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
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
        int leaderA = dsu_find(node1);
        int leaderB = dsu_find(node2);
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
    bool isCycle(int V, vector<int> adj[]) {
        dsu_init(V);
        bool cycle = false;
        for(int i=0;i<V;i++)
        {
            for(int child:adj[i])
            {
                if(i < child)
                {
                    int leaderA = dsu_find(i);
                    int leaderB = dsu_find(child);
                    if(leaderA == leaderB)
                    {
                        cycle = true;
                    }
                    else
                    {
                        dsu_union_size(i,child);
                    }
                }
            }
        }
        return cycle;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends