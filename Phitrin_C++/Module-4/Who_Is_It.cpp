#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[102];
    char section;
    int mark;
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Student a,b,c;
        cin>>a.id>>a.name>>a.section>>a.mark;
        cin>>b.id>>b.name>>b.section>>b.mark;
        cin>>c.id>>c.name>>c.section>>c.mark;

        if(a.mark>=b.mark && a.mark>=c.mark)
        {
           cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.mark<<endl;
        }
        else if(b.mark>=a.mark && b.mark>=c.mark)
        {
            cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.mark<<endl;
        }
        else if(c.mark>=a.mark && c.mark>=b.mark)
        {
            cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.mark<<endl;
        }
    }
    return 0;
}