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
bool cycle = false;
void dsu_union_by_size(int node1,int node2)
{
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);
    if(leaderA==leaderB)
    {
        cycle=true;
    }
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

int main()
{
    int n,m;
    cin>>n>>m;
    dsu_initialize(n);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        dsu_union_by_size(a,b);
    }
    if(cycle)
    {
        cout<<"Cycle Found"<<endl;
    }
    else
    {
        cout<<"Cycle Not Found"<<endl;
    }
    return 0;
}