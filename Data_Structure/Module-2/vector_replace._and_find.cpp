#include<bits/stdc++.h>
using namespace std;

int main()
{
    // replace
    // vector<int> v={2,5,7,9,5,2,4,8,2,7,2,5,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int c:v)
    // {
    //     cout<<c<<" ";
    // }

    vector<int> v={2,5,7,9,5,2,4,8,2,7,2,5,2};
    auto it=find(v.begin(),v.end(),7);
    if(it==v.end())
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}