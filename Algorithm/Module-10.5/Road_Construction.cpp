#include<bits/stdc++.h>
using namespace std;

int par[100005];
int dsu_size[100005];
int cmp,sz;
void dsu_init(int n)
{
    for(int i=1;i<=n;i++)
    {
        par[i]=-1;
        dsu_size[i]=1;
    }
    cmp=n;
    sz=0;
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
    if(leaderA==leaderB) return;
    if(dsu_size[leaderA] > dsu_size[leaderB])
    {
        par[leaderB]=leaderA;
        dsu_size[leaderA]+=dsu_size[leaderB];
        sz=max(sz,dsu_size[leaderA]);
    }
    else
    {
        par[leaderA]=leaderB;
        dsu_size[leaderB]+=dsu_size[leaderA];
        sz=max(sz,dsu_size[leaderB]);
    }
    cmp--;
}

int main()
{
    int n,e;
    cin>>n>>e;
    dsu_init(n);
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        dsu_union_by_size(a,b);
        cout<<cmp<<" "<<sz<<endl;
    }
    return 0;
}