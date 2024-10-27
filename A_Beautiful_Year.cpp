#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int m=n;
    if(n>=1987 && n<=2012)
    {
        cout<<"2013"<<endl;
    }
    else
    {
        while(true)
        {
            map<int,int> mp;
            vector<int> v;
            while(n!=0)
            {
                v.push_back(m%10);
                m/=10;
            }
            reverse(v.begin(),v.end());
            for(int val:v)
            {
                mp[val]++;
            }
            int cnt=0;
            for(auto val:mp)
            {
                if(val.second>1)
                {
                    cnt++;
                }
            }
            if(cnt>0)
            {
                n+=1;
            }
            else
            {
                cout<<n+1<<endl;;
                break;
            }
        }

    }
    return 0;
}