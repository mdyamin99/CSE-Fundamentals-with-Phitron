#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_mark;
    int eng_mark;
};

bool cmp(Student a,Student b)
{
    if(a.eng_mark==b.eng_mark)
    {
        if(a.math_mark==b.math_mark)
        {
            return a.id<b.id;
        }
        else 
        {
            return a.math_mark>b.math_mark;
        }
    }
    else
    {
        return a.eng_mark>b.eng_mark;
    }
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id>>a[i].math_mark>>a[i].eng_mark;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;
    }
    return 0;
}