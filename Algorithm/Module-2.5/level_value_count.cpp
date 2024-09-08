#include<bits/stdc++.h>
using namespace std;

vector<int> v[10005];
bool vis[10005];
vector<int> val;
void bfs(int src,int des)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    vis[src]=true;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        int par=p.first;
        int level=p.second;
        if(des==level)
        {
            val.push_back(p.first);
        }
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                q.push({child,level+1});
                vis[child]=true;
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
    int des;
    cin>>des;
    bfs(0,des);
    sort(val.begin(),val.end(),greater<int>());
    for(int i=0;i<val.size();i++)
    {
        cout<<val[i]<<" ";
    }
    return 0;
}