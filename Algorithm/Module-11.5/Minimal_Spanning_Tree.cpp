#include <bits/stdc++.h>
using namespace std;

int par[100005];
int sz[100005];
void dsu_init(int n)
{
    for(int i=1;i<=n;i++)
    {
        par[i]=-1;
        sz[i]=1;
    }
}

int dsu_find(int node)
{
    if(par[node]==-1) return node;
    int leader=dsu_find(par[node]);
    par[node]=leader;
    return leader;
}

void dsu_union_size(int node1,int node2)
{
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);
    if(sz[leaderA] > sz[leaderB])
    {
        par[leaderB]=leaderA;
        sz[leaderA]+=sz[leaderB];
    }
    else
    {
        par[leaderA]=leaderB;
        sz[leaderB]+=sz[leaderA];
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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,e;
    cin>>n>>e;
    dsu_init(n);
    vector<Edge> edgeList;
    while(e--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    int count=0;
    for(Edge eg:edgeList)
    {
        int leaderA=dsu_find(eg.u);
        int leaderB=dsu_find(eg.v);
        if(leaderA==leaderB)
        {
            continue;
        }
        else
        {
            dsu_union_size(eg.u,eg.v);
            count+=eg.w;
        }
    }
    cout<<count<<endl;
}
