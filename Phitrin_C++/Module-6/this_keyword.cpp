#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string name,int age,int mark1,int mark2)
    {
        this->name=name;
        this->age=age;
        this->mark1=mark1;
        this->mark2=mark2;
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