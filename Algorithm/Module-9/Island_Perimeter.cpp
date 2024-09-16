#include<bits/stdc++.h>
using namespace std;

int main()
{
    class Solution {
public:
    bool vis[105][105];
    int ans=0;
    vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
    int n,m;
    bool valid(int ci,int cj)
    {
        if(ci>=0 && ci<n && cj>=0 && cj<m) return true;
        else return false;
    }
    void dfs(int si,int sj,vector<vector<int>>& grid)
    {
        vis[si][sj]=true;
        for(int i=0;i<4;i++)
        {
            int ci=si+d[i].first;
            int cj=sj+d[i].second;
            if(valid(ci,cj))
            {
                if(grid[ci][cj]==0)
                {
                    ans++;
                }
            }
            else
            {
                ans++;
            }
            if(valid(ci,cj) && vis[ci][cj]==false && grid[ci][cj]==1)
            {
                dfs(ci,cj,grid);
            }
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        n=grid.size();
        m=grid[0].size();
        ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==false && grid[i][j]==1)
                {
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};
    return 0;
}