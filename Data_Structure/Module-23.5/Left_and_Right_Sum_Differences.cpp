class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v1;
        int sum1=0;
        v1.push_back(sum1);
        for(int i=0;i<nums.size()-1;i++)
        {
            sum1+=nums[i];
            v1.push_back(sum1);
        }
        vector<int> v2;
        int sum2=0;
        v2.push_back(sum2);
        for(int i=nums.size()-1;i>=1;i--)
        {
            sum2+=nums[i];
            v2.push_back(sum2);
        }
        reverse(v2.begin(),v2.end());
        vector<int> ans;
        for(int i=0;i<v1.size();i++)
        {
            ans.push_back(abs(v1[i]-v2[i]));
        }
        return ans;
    }
};