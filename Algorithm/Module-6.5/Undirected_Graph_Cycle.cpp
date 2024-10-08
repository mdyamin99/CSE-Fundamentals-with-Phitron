//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool vis[100005];
    int parentArray[100005];
    bool ans;
    void dfs(int src,vector<int> adj[])
    {
        vis[src]=true;
        for(int child:adj[src])
        {
            if(vis[child]==true && parentArray[src] != child)
            {
                ans=true;
            }
            if(vis[child]==false)
            {
                parentArray[child]=src;
                dfs(child,adj);
            }
        }
    }
    bool isCycle(int V, vector<int> adj[]) {
        memset(vis,false,sizeof(vis));
        memset(parentArray,-1,sizeof(parentArray));
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