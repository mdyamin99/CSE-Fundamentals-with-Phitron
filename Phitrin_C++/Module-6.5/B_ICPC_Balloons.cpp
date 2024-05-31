#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        int cnt=0;
        int ar[26]={0};
        for(int i=0;i<n;i++)
        {
            char xyz=s[i];
            int index=xyz-xyz;
            if(ar[index]==0)
            {
                cnt+=2;
                ar[index]=1;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}