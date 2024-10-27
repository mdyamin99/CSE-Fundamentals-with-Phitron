#include<bits/stdc++.h>
using namespace std;

int par[100005];
int dsu_size[100005];
void dsu_initialize(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        dsu_size[i]=1;
    }
}

int dsu_find(int node)
{
    if(par[node]==-1) return node;
    int leader=dsu_find(par[node]);
    par[node]=leader;
    return leader;
}

void dsu_union_by_size(int node1,int node2)
{
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);
    if(dsu_size[leaderA] > dsu_size[leaderB])
    {
        par[leaderB]=leaderA;
        dsu_size[leaderA]+=dsu_size[leaderB];
    }
    else
    {
        par[leaderA]=leaderB;
        dsu_size[leaderB]+=dsu_size[leaderA];
    }
}

class Edge
{
    public:
    int u,v,w;
    Edge(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};

bool cmp(Edge a,Edge b)
{
    return a.w < b.w;
}

int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    int totalCost=0;
    for(Edge eg:edgeList)
    {
        cout<<eg.u<<" "<<eg.v<<" "<<eg.w<<endl;
    }
    for(Edge eg:edgeList)
    {
        int leaderU=dsu_find(eg.u);
        int leaderV=dsu_find(eg.v);
        if(leaderU==leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(eg.u,eg.v);
            totalCost+=eg.w;
        }
    }
    cout<<totalCost<<endl;
    return 0;
}