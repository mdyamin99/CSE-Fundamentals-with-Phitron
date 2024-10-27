#include<bits/stdc++.h>
using namespace std;

char adj[50][50];
bool vis[50][50];
int dis[50][50];
vector<pair<int,int> > d;
int n;
bool valid(int ci,int cj)
{
    if(ci>=0 && ci<n && cj>=0 && cj<n)
    {
        return true;
    }
    return false;
}

void bfs(int si,int sj)
{
    queue<pair<int,int> > q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false && adj[ci][cj] != 'T')
            {
                vis[ci][cj]=true;
                q.push({ci,cj});
                dis[ci][cj]=dis[a][b]+1;
            }
        }
    }
}

int main()
{
    d.push_back({0,1});
    d.push_back({0,-1});
    d.push_back({1,0});
    d.push_back({-1,0});
    while(cin>>n)
    {
        int si,sj,di,dj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>adj[i][j];
                if(adj[i][j]=='S')
                {
                    si=i;
                    sj=j;
                }
                if(adj[i][j]=='E')
                {
                    di=i;
                    dj=j;
                }
            }
        }
        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        bfs(si,sj);
        cout<<dis[di][dj]<<endl;
    }
    return 0;
}