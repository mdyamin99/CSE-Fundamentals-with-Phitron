#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    mp["Shakib al hasan"]=79;
    mp["Akib"]=100;
    mp["tamin"]=30;

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<mp["Akib"]<<endl;
    return 0;
}