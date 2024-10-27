// class Solution {
// public:
// int dp[25][1005];
//     int set_sum(int n,vector<int>& nums,int s)
//     {
//         if(n==0)
//         {
//             if(s==0)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
//         if(dp[n][s]==-1)
//         {
//             return dp[n][s];
//         }
//         if(nums[n-1] <= s)
//         {
//             int op1 = set_sum(n-1,nums,s-nums[n-1]);
//             int op2 = set_sum(n-1,nums,s);
//             return dp[n][s]=op1+op2;
//         }
//         else
//         {
//             int op2 = set_sum(n-1,nums,s);
//             return dp[n][s]=op2;
//         }
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n = nums.size();
//         int sum = 0;
//         for(int val:nums)
//         {
//             sum += val;
//         }
//         int s1 = (sum+target)/2;
//         if(s1<0) return 0;
//         if((sum+target)%2==1) return 0;
//         return set_sum(n,nums,s1);
//     }
// };