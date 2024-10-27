#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int sum = 0;
    long long int max = v[v.size()-1];
    for(int i=0;i<n;i++)
    {
        sum += max-v[i];
    }
    cout<<sum<<endl;
    return 0;
}