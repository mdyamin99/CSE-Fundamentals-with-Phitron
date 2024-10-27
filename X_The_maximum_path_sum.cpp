#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int mat[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>mat[i][j];
        }
    }
    long long int ans1=0,ans2=0;
    for(int i=0;i<a;i++)
    {
        ans1+=mat[i][0];
        ans2+=mat[i][b-1];
    }
    
    for(int i=0;i<b;i++)
    {
        ans1+=mat[a-1][i];
        ans2+=mat[0][i];
    }
    ans1-=mat[a-1][0];
    ans2-=mat[0][b-1];

    cout<<max(ans1,ans2)<<endl;
    return 0;
}