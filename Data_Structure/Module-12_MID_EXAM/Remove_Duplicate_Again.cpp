#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for(int v:myList)
    {
        cout<<v<<" ";
    }
    return 0;
}