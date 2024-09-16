#include<bits/stdc++.h>
using namespace std;
const long long int INF=1e18;

class Edge
{
    public:
    int u,v,c;
    Edge(int u,int v,int c)
    {
        this->u=u;
        this->v=v;
        this->c=c;
    }
};

const int N=1000005;
long long int dis[N];
int main()
{
    long long int n,e;
    cin>>n>>e;
    vector<Edge> Edgelist;
    while(e--)
    {
        int u,v,c;
        cin>>u>>v>>c;
        Edgelist.push_back(Edge(u,v,c));
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INF;
    }
    int src;
    cin>>src;
    dis[src]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(Edge eg:Edgelist)
        {
            int u=eg.u;
            int v=eg.v;
            int c=eg.c;
            if(dis[u] < INF && dis[u]+c < dis[v])
            {
                dis[v]=dis[u]+c;
            }
        }
    }

    bool cycle=false;
    for(Edge eg:Edgelist)
    {
        int u=eg.u;
        int v=eg.v;
        int c=eg.c;
        if(dis[u] < INF && dis[u]+c < dis[v])
        {
            cycle=true;;
            break;
        }
    }

    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
    }
    else
    {
        int t;
        cin>>t;
        while(t--)
        {
            long long int w;
            cin>>w;
            if(dis[w]==INF)
            {
                cout<<"Not Possible"<<endl;
            }
            else
            {
                cout<<dis[w]<<endl;
            }
        }
    }
    return 0;
}