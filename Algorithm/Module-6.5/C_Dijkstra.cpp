#include<bits/stdc++.h>
using namespace std;

const long long int INT=1e18;
vector<pair<int,int>> v[100005];
long long int dis[100005];
long long int p[100005];
bool vis[100005];

void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int,int> parent = pq.top();
        pq.pop();
        int cost = parent.first;
        int node = parent.second;
        vis[node]=true;
        for(auto child:v[node])
        {
            int childCost = child.first;
            int childNode = child.second;
            if(dis[node]+childCost < dis[childNode])
            {
                dis[childNode]=dis[node]+childCost;
                pq.push({dis[childNode],childNode});
                p[childNode]=node;
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({c,b});
        v[b].push_back({c,a});
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=INT;
    }
    int src = 1;
    dijkstra(src);
    if(vis[n] != true)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int current = n;
    vector<int> path;
    while(true)
    {
        path.push_back(current);
        if(current==src)
        {
            break;
        }
        current=p[current];
    }
    reverse(path.begin(),path.end());

    for(auto child:path)
    {
        cout<<child<<" ";
    }
    return 0;
}