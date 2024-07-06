#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100003];
    while(cin.getline(a,100003))
    {
        sort(a,a+strlen(a));
        char ar[100003];
        int j=0;
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]!=' ')
            {
                ar[j]=a[i];
                j++;
            }
            ar[j]='\0';
        }
        cout<<ar<<endl;
    }
    return 0;
}