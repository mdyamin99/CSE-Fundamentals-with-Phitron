#include<bits/stdc++.h>
using namespace std;

char adj[10005][10005];
bool vis[10005][10005];
vector<pair<int,int> > d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int ci,int cj)
{
    if(ci>=0 && ci<n && cj>=0 && cj<m)
    {
        return true;
    }
    return false;
}

int bfs(int si,int sj)
{
    int cnt=0;
    queue<pair<int,int> > q;
    q.push({si,sj});
    vis[si][sj]=true;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        cnt++;
        for(int i=0;i<4;i++)
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false && adj[ci][cj] != '-')
            {
                vis[ci][cj]=true;
                q.push({ci,cj});
            }
        }
    }
    return cnt;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(adj[i][j]=='.' && vis[i][j]==false)
            {
                int ans=bfs(i,j);
                mn=min(mn,ans);
            }
        }
    }
    if(mn==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mn<<endl;
    }
    return 0;
}