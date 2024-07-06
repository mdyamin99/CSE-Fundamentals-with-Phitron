#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)
    {
        // roll=r;      
        // cls=c;
        // gpa=g;

        //Dui vabey kora jai

        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main()
{
    Student rahim(12,9,4.93);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    return 0;
}