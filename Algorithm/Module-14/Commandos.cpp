#include<bits/stdc++.h>
using namespace std;
vector<int> v[105];
bool vis[105];
int dis_src[105];
int dis_des[105];

void bfs(int s,int track)
{
    queue<int> q;
    q.push(s);
    vis[s]=true;
    if(track==1) dis_src[s]=0;
    else dis_des[s]=0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par])
        {
            if(vis[child]==false)
            {
                vis[child]=true;
                q.push(child);
                if(track==1)
                {
                    dis_src[child]=dis_src[par]+1;
                }
                else
                {
                    dis_des[child]=dis_des[par]+1;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    int cs=1;
    while(t--)
    {
        int n,e;
        cin>>n>>e;
        while(e--)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int s,d;
        cin>>s>>d;
        for(int i=0;i<n;i++)
        {
            vis[i]=false;
            dis_src[i]=-1;
        }
        bfs(s,1);
        for(int i=0;i<n;i++)
        {
            vis[i]=false;
            dis_des[i]=-1;
        }
        bfs(d,2);
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int val=dis_src[i]+dis_des[i];
            ans=max(ans,val);
        }
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;
        for(int i=0;i<n;i++)
        {
            v[i].clear();
        }
    }
    return 0;
}