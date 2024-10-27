#include<bits/stdc++.h>
using namespace std;

vector<int> v[100005];
int vis[100005];
int dis[100005];
int parent[100005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    dis[src]=0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                vis[child]=true;
                q.push(child);
                dis[child]=dis[par]+1;
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
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    memset(parent,-1,sizeof(parent));
    bfs(1);
    if(dis[n]==-1) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        int x=n;
        vector<int> path;
        while(x != -1)
        {
            path.push_back(x);
            x=parent[x];
        }
        cout<<path.size()<<endl;
        reverse(path.begin(),path.end());
        for(int l:path)
        {
            cout<<l<<" ";
        }
    }
    return 0;
}