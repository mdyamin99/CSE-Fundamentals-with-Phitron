#include<bits/stdc++.h>
using namespace std;

int main()
{
    class Solution {
public:
    bool vis[305][305];
    vector<pair<int,int>> d={{0,1},{0,-1},{1,0},{-1,0}};
    int n,m;
    bool valid(int ci,int cj)
    {
        if(ci>=0 && ci<n && cj>=0 && cj<m) return true;
        else return false;
    }
    void dfs(int si,int sj,vector<vector<char>>& grid)
    {
        vis[si][sj]=true;
        for(int i=0;i<4;i++)
        {
            int ci=si+d[i].first;
            int cj=sj+d[i].second;
            if(valid(ci,cj) && vis[ci][cj]==false && grid[ci][cj]=='1')
            {
                dfs(ci,cj,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==false && grid[i][j]=='1')
                {
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
    return 0;
}