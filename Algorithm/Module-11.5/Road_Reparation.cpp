#include<bits/stdc++.h>
using namespace std;

int par[1000005];
int dsu_size[1000005];
void dsu_initialize(int n)
{
    for(int i=1;i<=n;i++)
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
    long long int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--)
    {
        long long int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    long long int count=0;
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
            dsu_union_by_size(eg.u,eg.v);
            count+=eg.w;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(par[i]==-1)
        {
            cnt++;
        }
    }
    if(cnt==1)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}