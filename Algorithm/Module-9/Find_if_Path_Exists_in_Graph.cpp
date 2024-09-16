#include<bits/stdc++.h>
using namespace std;

int main()
{
    class Solution {
public:
    vector<int> v[200005];
    bool vis[200005];
    void dfs(int s)
    {
        vis[s]=true;
        for(int child:v[s])
        {
            if(vis[child]==false)
            {
                dfs(child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(vis,false,sizeof(vis));
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(source);
        return vis[destination];
    }
};
    return 0;
}