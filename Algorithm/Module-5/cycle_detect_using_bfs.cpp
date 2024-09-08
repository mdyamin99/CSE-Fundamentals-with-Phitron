#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool ans;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int par=q.front();
        // cout<<par<<endl;
        q.pop();
        for(int child:adj[par])
        {
            if(vis[child]==true && parentArray[par] != child)
            {
                ans=true;
            }
            if(vis[child]==false)
            {
                vis[child]=true;
                parentArray[child]=par;
                q.push(child);
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parentArray,-1,sizeof(parentArray));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            bfs(i);
        }
    }
    if(ans==true)
    {
        cout<<"Cycle found"<<endl;
    }
    else
    {
        cout<<"Cycle Not found"<<endl;
    }
    return 0;
}