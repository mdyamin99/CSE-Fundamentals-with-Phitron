#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    list<int> lt;
    while(t--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int x;
            cin>>x;
            if(x==lt.back())
            {
                lt.pop_back();

            }
            lt.push_back(x);
        }
        else if(op==2)
        {
            if(lt.empty())
            {
                cout<<"empty"<<endl;
            }
            else
            {
                
                cout<<lt.back()<<endl;
                lt.pop_back();
            }
        }
    }
    return 0;
}