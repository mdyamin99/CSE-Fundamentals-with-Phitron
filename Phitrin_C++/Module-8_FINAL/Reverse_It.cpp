#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
    }
    int i=0,j=n-1;
    while(i<j)
    {
        swap(a[i].section,a[j].section);
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    return 0;
}