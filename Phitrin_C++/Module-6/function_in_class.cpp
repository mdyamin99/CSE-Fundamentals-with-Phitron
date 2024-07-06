#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        mark1=m1;
        mark2=m2;
    }
    void hello()
    {
        cout<<name<<" "<<age<<endl;
    }
    int total_mark()
    {
        return mark1+mark2;
    }
};

int main()
{
    Person rakib("Rakib hasan",24,80,90);
    // rakib.hello();
    cout<<rakib.total_mark()<<endl;
    return 0;
}