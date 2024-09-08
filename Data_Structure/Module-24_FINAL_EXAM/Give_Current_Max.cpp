#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int mark;
        Student(string name,int roll,int mark)
        {
            this->name=name;
            this->roll=roll;
            this->mark=mark;
        }
};

class cmp
{
    public:
        bool operator()(Student a,Student b)
        {
            if(a.mark < b.mark) return true;
            else if(a.mark > b.mark) return false;
            else 
            {
                if(a.roll > b.roll) return true;
                else return false;
            }
        }
};

int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp> q;
    while(n--)
    {
        string name;
        int roll,mark;
        cin>>name>>roll>>mark;
        Student obj(name,roll,mark);
        q.push(obj);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            if(q.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().mark<<endl;
            }
        }
        else if(a==2)
        {
            if(!q.empty())
            {
                q.pop();
            }
            if(q.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().mark<<endl;
            }
        }
        else if(a==0)
        {
            string name;
            int roll,mark;
            cin>>name>>roll>>mark;
            Student obj(name,roll,mark);
            q.push(obj);
            cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().mark<<endl;
        }
    }
    return 0;
}