#include<bits/stdc++.h>
using namespace std;

int par[1005];
int sz[1005];
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
    int leader = dsu_find(par[node]);
    par[node]=leader;
    return leader;
}

void dsu_union_size(int node1,int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(sz[leaderA] > sz[leaderB])
    {
        par[leaderB] = leaderA;
        sz[leaderA]+=sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        sz[leaderB]+=sz[leaderA];
    }
}

int main()
{
    int n;
    cin>>n;
    int e=n-1;
    dsu_init(n);
    vector<pair<int,int>> v;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB)
        {
            v.push_back({a,b});
        }
        else
        {
            dsu_union_size(a,b);
        }
    }
    vector<pair<int,int>> path;
    cout<<v.size()<<endl;
    for(int i=2;i<=n;i++)
    {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);
        if(leaderA != leaderB)
        {
            path.push_back({1,i});
            dsu_union_size(1,i);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" "<<path[i].first<<" "<<path[i].second<<endl;
    }
    return 0;
}