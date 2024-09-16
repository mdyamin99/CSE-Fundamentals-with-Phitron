#include<bits/stdc++.h>
using namespace std;

const long long int INF=1e18;
int main()
{
    long long int n,e;
    cin>>n>>e;
    long long int adj[n+5][n+5];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            adj[i][j]=INF;
            if(i==j)
            {
                adj[i][j]=0;
            }
        }
    }
    while(e--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        adj[a][b]=min(adj[a][b],c);
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(adj[i][k]+adj[k][j] < adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int s,d;
        cin>>s>>d;
        if(adj[s][d]==INF)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<adj[s][d]<<endl;
        }
    }
    return 0;
}