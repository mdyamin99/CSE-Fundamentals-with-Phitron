#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long cur = 0;
        for (int i=0;i<n-2;i++) {
            cin>>v[i];
            cur+=v[i];
        }
        long long x;
        cin>>x;
        long long y=x-cur;
        long long res=y-1; 
        cout<<res+2<<endl;
    }
    return 0;
}