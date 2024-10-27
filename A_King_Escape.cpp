#include<bits/stdc++.h>
using namespace std;
int n;
bool vis[1005][1005];
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
bool valid(int ci,int cj)
{
    if(ci<=n && ci>0 && cj<=n && cj>0) return true;
    else return false;
}

void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    while(!q.empty())
    {
        pair<int,int> par=q.front();
        int a=par.first,b=par.second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
            }
        }
    }
}

int main()
{
    memset(vis,false,sizeof(vis));
    cin>>n;
    int qs,qj,ks,kj,ds,dj;
    cin>>qs>>qj;
    cin>>ks>>kj;
    cin>>ds>>dj;
    for(int i=0;i<8;i++)
    {
        int ci=qs+d[i].first;
        int cj=qj+d[i].second;
        while(valid(ci,cj))
        {
            vis[ci][cj]=true;
            ci+=d[i].first;
            cj+=d[i].second;
        }
    }
    bfs(ks,kj);
    if(vis[ds][dj])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}