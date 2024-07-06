#include<bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(10,5);
    // list<int> list2={10,20,30,40,50};
    // list<int> myList(list2);
    // int a[3]={100,200,300};
    // list<int> myList(a,a+3);
    vector<int> v={10,20,30,40};
    list<int> myList(v.begin(),v.end());

    // for(auto it=myList.begin();it!=myList.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}