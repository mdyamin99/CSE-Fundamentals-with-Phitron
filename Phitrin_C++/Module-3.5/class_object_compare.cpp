#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    char section[10];
    double math_mark;
    int cls;
};

int main()
{
    Student a,b,c;

    cin.getline(a.name,100);
    cin>>a.roll>>a.section>>a.math_mark>>a.cls;
    getchar();

    cin.getline(b.name,100);
    cin>>a.roll>>b.section>>b.math_mark>>b.cls;
    getchar();

    cin.getline(c.name,100);
    cin>>c.roll>>c.section>>c.math_mark>>c.cls;

    if(a.math_mark>b.math_mark && a.math_mark>c.math_mark)
    {
        cout<<a.name<<endl;
    }

    if(b.math_mark>a.math_mark && b.math_mark>c.math_mark)
    {
        cout<<b.name<<endl;
    }

    if(c.math_mark>a.math_mark && c.math_mark>b.math_mark)
    {
        cout<<c.name<<endl;
    }

    return 0;
}