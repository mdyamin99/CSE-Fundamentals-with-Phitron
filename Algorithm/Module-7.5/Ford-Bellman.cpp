#include <bits/stdc++.h>
using namespace std;

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
int dis[105];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,e;
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
        dis[i]=INT_MAX;
    }
    dis[1]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(Edge eg:Edgelist)
        {
            int u,v,c;
            u=eg.u;
            v=eg.v;
            c=eg.c;
            if(dis[u] < INT_MAX && dis[u]+c < dis[v])
            {
                dis[v]=dis[u]+c;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(dis[i]==INT_MAX)
        {
            cout<<"30000"<<" ";
        }
        else
        {
            cout<<dis[i]<<" ";
        }
    }
}
