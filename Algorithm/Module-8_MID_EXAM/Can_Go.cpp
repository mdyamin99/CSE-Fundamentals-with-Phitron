#include<bits/stdc++.h>
using namespace std;

const int N=1000005;
vector<pair<int,int>> v[N];
long long int dis[N];

class cmp
{
    public:
        bool operator()(pair<int,int> a,pair<int,int> b)
        {
            return a.second > b.second;
        }
};
void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
    q.push({src,0});
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int> parent = q.top();
        q.pop();
        long long int node = parent.first;
        long long int cost = parent.second;
        for(pair<int,int> child:v[node])
        {
            long long int childNode=child.first;
            long long int childCost=child.second;
            if(cost+childCost < dis[childNode])
            {
                dis[childNode] = cost+childCost;
                q.push({childNode,dis[childNode]});
            }
        }
    }
}
int main()
{
    long long int n,e;
    cin>>n>>e;
    
    while(e--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }
    int src;
    cin>>src;
    dijkstra(src);
    int t;
    cin>>t;
    while(t--)
    {
        long long int d,dw;
        cin>>d>>dw;
        if(dis[d] <= dw)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}