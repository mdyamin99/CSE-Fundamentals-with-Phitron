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
int bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    int cnt=0;
    while(!q.empty())
    {
        pair<int,int> par=q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        cnt++;
        for(int i=0;i<4;i++)
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
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
            cin>>a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.' && vis[i][j]==false)
            {
                v.push_back(bfs(i,j));
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}