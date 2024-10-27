#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,q;
    cin>>n>>q;
    while(q--)
    {
        long long int l,r;
        cin>>l>>r;
        if(l==1)
        {
            if(r%2==1)
            {
                long long int st = (r/2)+1;
                long long int sum = ((st*(st+1)/2)*2)-st;
                cout<<sum<<endl;
            }
            else
            {
                long long int lr = r/2;
                long long int sum = (lr*(lr+1)/2)*2;
                cout<<sum<<endl;
            }
        }
        else
        {
            if(l%2==0)
            {
                long long int vag = l/2;
                long long int lt = (vag*(vag+1)/2)*2;
                if(r%2==0)
                {
                    long long int lr = r/2;
                    long long int sum = (lr*(lr+1)/2)*2;
                    cout<<(sum-lt)+vag<<endl;
                }
                else
                {
                    long long int st = (r/2)+1;
                    long long int sum = ((st*(st+1)/2)*2)-st;
                    cout<<(sum-lt)+vag<<endl;
                }
            }
            else
            {
                long long int st = (l/2)+1;
                long long int lt = ((st*(st+1)/2)*2)-st;
                if(r%2==0)
                {
                    long long int lr = r/2;
                    long long int sum = (lr*(lr+1)/2)*2;
                    cout<<(sum-lt)+st<<endl;
                }
                else
                {
                    long long int sl = (r/2)+1;
                    long long int sum = ((sl*(sl+1)/2)*2)-sl;
                    cout<<(sum-lt)+st<<endl;
                }
            }
        }
    }
    return 0;
}