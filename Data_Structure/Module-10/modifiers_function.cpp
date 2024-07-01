#include<bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList2={10,20,30,40,50};
    // list<int> myList;
    // myList=myList2;

    list<int> myList={10,20,30,40,50,60,70};
    list<int> newList={100,200,300};
    // myList.pop_front();
    // myList.pop_back();
    // myList.push_front(40);
    // myList.push_back(40);
    // myList.insert(next(myList.begin(),2),100);
    // myList.insert(next(myList.begin(),3),newList.begin(),newList.end());
    // myList.erase(next(myList.begin(),2));
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    // replace(myList.begin(),myList.end(),30,100);

    // for(int val:myList)
    // {
    //     cout<<val<<endl;
    // }
    // return 0;

    auto it = find(myList.begin(),myList.end(),50);
    if(it == myList.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
}