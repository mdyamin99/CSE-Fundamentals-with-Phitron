// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;
//     int cnt=0;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         if(s[0]=='-' || s[1]=='-')
//         {
//             cnt--;
//         }
//         if(s[0]=='+' || s[1]=='+')
//         {
//             cnt++;
//         }
//     }
//     cout<<cnt<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a=5;
    int b=a++;
    cout<<a<<" "<<b<<endl;
    return 0;
}