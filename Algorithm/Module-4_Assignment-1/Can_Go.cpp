#include<bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;

bool valid(int ci,int cj)
{
    if(ci<0 || ci>=n || cj<0 || cj>=m || a[ci][cj]=='#')
    {
        return false;
    }
    return true;
}
void dfs(int si,int sj)
{
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci=si+d[i].first;
        int cj=sj+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
            dfs(ci,cj);
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
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='A')
            {
                dfs(i,j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='B')
            {
                if(vis[i][j])
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}