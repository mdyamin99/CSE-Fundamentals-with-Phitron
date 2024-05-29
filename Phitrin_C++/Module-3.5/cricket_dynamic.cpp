#include<bits/stdc++.h>
using namespace std;

class Cricket
{
    public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricket *dhoni = new Cricket();
    dhoni->jersey_no=18;
    char tmp[100]="India";
    strcpy(dhoni->country,tmp);
    Cricket *kohli = new Cricket();
    kohli->jersey_no=dhoni->jersey_no;
    strcpy(kohli->country,dhoni->country);
    delete dhoni;
    cout<<kohli->jersey_no<<endl<<kohli->country<<endl;
    delete kohli;
    return 0;
}