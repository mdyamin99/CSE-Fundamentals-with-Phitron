#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    map<int,int> mp;
    while (t--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int y;
            cin>>y;
            mp[y]++;
        }
        else if(op==2)
        {
            if (mp.empty())
            {
                cout<<"empty\n";
            }
            else
            {
                auto it = mp.begin();
                cout<<it->first<<"\n";
                mp.erase(it);
            }
        }
    }
    return 0;
}