// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     int cotoFact = fact(n-1);
//     return cotoFact * n;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    cout<<ans<<endl;
    return 0;
}