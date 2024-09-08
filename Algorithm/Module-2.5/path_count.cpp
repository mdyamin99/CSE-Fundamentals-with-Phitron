#include<bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool vis[10005];
int parent[10005];
bool flg=false;
void bfs(int src,int des)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        if(des==par)
        {
            flg=true;
        }
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
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
    int t;
    cin>>t;
    while(t--)
    {
        int src,des;
        cin>>src>>des;
        memset(vis,false,sizeof(vis));
        memset(parent,-1,sizeof(parent));
        bfs(src,des);
        int x=des;
        int ans=0;
        while(x != -1)
        {
            x=parent[x];
            ans++;
        }
        if(flg==false)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans-1<<endl;
        }
    }
    return 0;
}