#include<bits/stdc++.h>
const long long int INF=1e18+5;
using namespace std;

int main()
{
    long long int n,e,q;
    cin>>n>>e>>q;
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
        adj[b][a]=min(adj[b][a],c);
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
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(adj[a][b]==INF)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<adj[a][b]<<endl;
        }
    }
    return 0;
}