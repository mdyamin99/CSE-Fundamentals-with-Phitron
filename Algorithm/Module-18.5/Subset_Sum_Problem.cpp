//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int dp[105][10005];
    bool set_sum(int n,vector<int> arr,int sum)
    {
        if(n==0)
        {
            if(sum==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if(dp[n][sum] != -1)
        {
            return dp[n][sum];
        }
        if(arr[n-1] <= sum)
        {
            bool op1 = set_sum(n-1,arr,sum-arr[n-1]);
            bool op2 = set_sum(n-1,arr,sum);
            return dp[n][sum] = op1 || op2;
        }
        else
        {
            bool op2 = set_sum(n-1,arr,sum);
            return dp[n][sum] = op2;
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        memset(dp,-1,sizeof(dp));
        return set_sum(n,arr,sum);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends