#include<bits/stdc++.h>
using namespace std;

int n,m;
char adj[1005][1005];
bool vis[1005][1005];
int dis[1005][1005];
pair<int,int> parent[1005][1005];
vector<pair<int,int>> d={{1,0},{-1,0},{0,-1},{0,1}};

bool valid(int ci,int cj)
{
    if(ci>=0 && ci<n && cj>=0 && cj<m && adj[ci][cj]!='#') return true;
    else return false;
}

void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int> par=q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int d1=d[i].first;
            int d2=d[i].second;
            int ci=a+d1;
            int cj=b+d2;
            if(valid(ci,cj) && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj]=dis[a][b]+1;
                parent[ci][cj]={a,b};
            }
        }
    }
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
    int si,sj,di,dj;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(adj[i][j]=='D')
            {
                si=i;
                sj=j;
                bfs(i,j);
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(adj[i][j]=='R')
            {
                di=i;
                dj=j;
                if(vis[i][j])
                {
                    pair<int,int> p = {di,dj};
                    while(!(p.first == si && p.second == sj))
                    {
                        adj[p.first][p.second]='X';
                        p = parent[p.first][p.second];
                    }
                    adj[di][dj]='R';
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<adj[i][j];
        }
        cout<<endl;
    }
    return 0;
}