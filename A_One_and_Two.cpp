#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==2)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<"1"<<endl;
        }
        else if(cnt%2 != 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int ans = cnt/2;
            int cntt = 0;
            int paici;
            for(int i=0;i<n;i++)
            {
                if(v[i]==2)
                {
                    cntt++;
                    if(cntt==ans)
                    {
                        paici=i;
                        break;
                    }
                }
            }
            cout<<paici+1<<endl;
        }
    }
    return 0;
}