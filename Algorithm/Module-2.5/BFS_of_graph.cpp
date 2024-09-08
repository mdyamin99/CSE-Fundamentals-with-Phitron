class Solution {
  public:
    bool vis[100005];
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        memset(vis,false,sizeof(vis));
        vector<int> v;
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty())
        {
            int par=q.front();
            q.pop();
            v.push_back(par);
            for(int child:adj[par])
            {
                if(vis[child]==false)
                {
                    q.push(child);
                    vis[child]=true;
                }
            }
        }
        return v;
    }
};