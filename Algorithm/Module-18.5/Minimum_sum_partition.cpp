//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    long long int s= 0;
	    for(int i=0;i<n;i++)
	    {
	        s+=arr[i];
	    }
	    bool dp[n+1][s+1];
	    dp[0][0] = true;
	    for(int i=1;i<=s;i++)
	    {
	        dp[0][i] = false;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=0;j<=s;j++)
	        {
	            if(arr[i-1] <= j)
	            {
	                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    vector<int> v;
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=s;j++)
	        {
	            if(dp[i][j])
	            {
	                v.push_back(j);
	            }
	        }
	    }
	    int ans = INT_MAX;
	    for(int val:v)
	    {
	        int s1 = val;
	        int s2 = s-val;
	        ans = min(ans,abs(s1-s2));
	    }
	    return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends