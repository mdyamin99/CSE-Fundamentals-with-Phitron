#include<bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool vis[1005][1005];
int dis[1005][1005];
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;

bool valid(int ci,int cj)
{
    if(ci<0 || ci>=n || cj<0 || cj>=m || a[ci][cj]=='-')
    {
        return false;
    }
    return true;
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
        // cout<<a<<" "<<b<<endl;
        for(int i=0;i<4;i++)
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj]=dis[a][b]+1;
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
            cin>>a[i][j];
        }
    }
    int si,sj;
    cin>>si>>sj;
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(si,sj);
    int di,dj;
    cin>>di>>dj;
    if(vis[di][dj]==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}