#include<bits/stdc++.h>
using namespace std;

char adj[50][50];
bool vis[50][50];
vector<pair<int,int> > d={{0,1},{0,-1},{-1,0},{1,0}};
int m,n;
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
            if(valid(ci,cj) && vis[ci][cj]==false && adj[ci][cj] != '#')
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
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        cin>>m>>n;
        int si,sj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>adj[i][j];
                if(adj[i][j]=='@')
                {
                    si=i;
                    sj=j;
                }
            }
        }
        memset(vis,false,sizeof(vis));
        int ans= bfs(si,sj);
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;
    }
    return 0;
}