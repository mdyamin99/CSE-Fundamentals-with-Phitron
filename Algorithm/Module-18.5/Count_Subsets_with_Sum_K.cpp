// long long int dp[105][1005];
// long long int set_sum(int n,vector<int> arr,int k)
// {
// 	if(n==0)
// 	{
// 		if(k==0)
// 		{
// 			return 1;
// 		}
// 		else
// 		{
// 			return 0;
// 		}
// 	}
// 	if(dp[n][k] != -1) return dp[n][k];
// 	if(arr[n-1] <= k)
// 	{
// 		long long int op1 = set_sum(n-1,arr,k-arr[n-1]);
// 		long long int op2 = set_sum(n-1,arr,k);
// 		return dp[n][k] = op1 + op2;
// 	}
// 	else
// 	{
// 		long long int op2 = set_sum(n-1,arr,k);
// 		return dp[n][k] = op2;
// 	}
// }
// int findWays(vector<int> &arr, int k) 
// {
// 	int n = arr.size();
// 	for(int i=0;i<=n;i++)
// 	{
// 		for(int j=0;j<=k;j++)
// 		{
// 			dp[i][j]=-1;
// 		}
// 	}
// 	long long int ans = set_sum(n,arr,k);
// 	if(ans > INT_MAX)
// 	{
// 		return ans%1000000007;
// 	}
// 	else
// 	{
// 		return ans;
// 	}
// }
