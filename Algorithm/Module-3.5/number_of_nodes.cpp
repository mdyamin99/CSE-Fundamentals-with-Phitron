#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    int cnt=0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        cnt++;
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
    return cnt;
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
    vector<int> vv;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            vv.push_back(bfs(i));
        }
    }
    sort(vv.begin(),vv.end());
    for(int i=0;i<vv.size();i++)
    {
        cout<<vv[i]<<" ";
    }
    return 0;
}