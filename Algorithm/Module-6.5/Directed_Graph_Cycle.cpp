//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool vis[100005];
    bool pathVis[100005];
    bool ans;
    void dfs(int src,vector<int> adj[])
    {
        vis[src]=true;
        pathVis[src]=true;
        for(int child:adj[src])
        {
            if(pathVis[child]==true)
            {
                ans=true;
            }
            if(vis[child]==false)
            {
                dfs(child,adj);
            }
        }
        pathVis[src]=false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        memset(vis,false,sizeof(vis));
        memset(pathVis,false,sizeof(pathVis));
        ans=false;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                dfs(i,adj);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends