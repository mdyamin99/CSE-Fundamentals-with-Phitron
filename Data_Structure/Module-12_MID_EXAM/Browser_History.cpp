#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    string val;
    while(true)
    {
        cin>>val;
        if(val=="end") break;
        myList.push_back(val);
    }
    int t;
    cin>>t;
    list<string>::iterator cr;
    while(t--)
    {
        string cm,ad_cm;
        cin>>cm;
        if(cm=="visit")
        {
            cin>>ad_cm;
            auto it = find(myList.begin(), myList.end(),ad_cm);
            if (it != myList.end()) {
                cr = it;
                cout<<*cr<<endl;
            } else {
                cout<<"Not Available"<<endl;
            }
        }
        else if(cm=="next")
        {
            if (next(cr) != myList.end()) {
            cr++;
            cout<<*cr<<endl;
            } else {
                cout<<"Not Available"<<endl;
            }
        }
        else if(cm=="prev")
        {
            if (cr != myList.begin()) {
            cr--;
            cout <<*cr<<endl;
            } else {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}