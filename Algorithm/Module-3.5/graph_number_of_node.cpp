#include<bits/stdc++.h>
using namespace std;

vector<int> v[10000];
bool vis[10000];
vector<int> vv;
void dfs(int src)
{
    vv.push_back(src);
    vis[src]=true;
    for(int child:v[src])
    {
        if(vis[child]==false)
        {
            dfs(child);
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
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    dfs(src);
    cout<<vv.size()<<endl;
    return 0;
}