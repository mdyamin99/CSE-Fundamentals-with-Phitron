#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int level[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout<<par<<endl;
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
                parent[child]=par;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src,des;
    cin>>src>>des;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    bfs(src);
    vector<int> path;
    int x=des;
    while(x != -1)
    {
        //path.push_back(x);
        cout<<x<<" ";
        x=parent[x];
    }
    // reverse(path.begin(),path.end());
    // for(int i=0;i<path.size();i++)
    // {
    //     cout<<path[i]<<" ";
    // }
    return 0;
}