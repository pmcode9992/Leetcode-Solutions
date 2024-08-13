class Solution {
public:
    int f(int index, int prev, vector<int>& nums, vector<vector<int>>& dp) {
        if (index == nums.size()) {
            return 0;
        }
        if (dp[index][prev + 1] != -1) {
            return dp[index][prev + 1];
        }
        int take = 0;
        int notTake = f(index + 1, prev, nums, dp);
        if (prev == -1 || nums[index] > nums[prev]) {
            take = 1 + f(index + 1, index, nums, dp);
        }
        return dp[index][prev + 1] = max(take, notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int take;
        int notTake;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        
        return f(0,-1, nums, dp);
    }
};