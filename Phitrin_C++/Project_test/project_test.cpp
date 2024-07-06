#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    string name;
    int bang;
    int eng;
    int math;

    int total;
    double avg;
    string gpa;
    int roll;
};

bool cmp(Student a,Student b)
{
    if(a.total==b.total)
    {
        return a.id<b.id;
    }
    else
    {
        return a.total>b.total;
    }
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].id>>a[i].name>>a[i].bang>>a[i].eng>>a[i].math;
        a[i].total=a[i].bang+a[i].eng+a[i].math;
        a[i].avg=(double)a[i].total/3;

        if(a[i].avg>=80)
        {
            a[i].gpa="A+";
        }
        else if(a[i].avg>=70)
        {
            a[i].gpa="A";
        }
        else if(a[i].avg>=60)
        {
            a[i].gpa="A-";
        }
        else if(a[i].avg>=50)
        {
            a[i].gpa="B+";
        }
        else if(a[i].avg>=40)
        {
            a[i].gpa="B";
        }
        else
        {
            a[i].gpa="F";
        }
    }
    sort(a,a+n,cmp);

    cout<<"\nRoll\tID\tName\tBang\tEng\tMath\tTotal\tAvg\tGPA"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t"<<a[i].id<<"\t"<<a[i].name<<"\t"<<a[i].bang<<"\t"<<a[i].eng<<"\t"<<a[i].math<<"\t"<<a[i].total<<"\t"<<fixed<<setprecision(2)<<a[i].avg<<"\t"<<a[i].gpa<<endl;
    }
    return 0;
}