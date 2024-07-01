#include<bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    *p=20;
}

int main()
{
    int val=10;
    int *prt=&val;
    fun(prt);
    cout<<*prt<<endl;
    return 0;
}