#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList={20,40,10,50,30,60,10,10};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    reverse(myList.begin(),myList.end());

    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}