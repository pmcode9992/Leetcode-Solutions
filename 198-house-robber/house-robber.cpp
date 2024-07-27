class Solution {
public:
    int f(int index, vector<int> &nums, vector<int> &dp){
        if(index <= 0){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }

        dp[index] =  max((nums[index -1] + f(index - 2, nums, dp)), f(index - 1, nums, dp));
        return dp[index];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, -1);
        dp[0] = 0;
        return f(nums.size(), nums, dp);
    }
};