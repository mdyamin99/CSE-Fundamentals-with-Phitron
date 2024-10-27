#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n,w;
    cin>>k>>n>>w;
    long long int sum = 0;
    for(int i=1;i<=w;i++)
    {
        sum += k*i;
    }
    if(n>=sum)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<sum-n<<endl;
    }
    return 0;
}