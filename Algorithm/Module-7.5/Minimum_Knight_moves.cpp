#include<bits/stdc++.h>
using namespace std;

bool vis[20][20];
int dis[20][20];
vector<pair<int,int>> d={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
int n,m;

bool valid(int ci,int cj)
{
    if(ci<0 || ci>=n || cj<0 || cj>=m)
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
        for(int i=0;i<8;i++)
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
    int t;
    cin>>t;
    while(t--)
    {
        n=8,m=8;
        string a,b;
        cin>>a>>b;
        int si,sj,di,dj;
        si=a[0]-'a';
        sj=a[1]-'1';
        di=b[0]-'a';
        dj=b[1]-'1';
        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        bfs(si,sj);
        cout<<dis[di][dj]<<endl;
    }
    return 0;
}