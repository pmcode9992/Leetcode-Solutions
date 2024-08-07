class Solution {
public:
    int f(int index, int s, int target, vector<int> &nums, vector<vector<int>> &dp){
        if(s > target){
            return 0;
        }
        if(index == nums.size()){
            if(s == target){
                return 1;
            }
            return 0;
        }
        if(dp[index][s]!=-1){
            return dp[index][s];
        }
        return dp[index][s] = f(index + 1, s + nums[index], target, nums, dp) + f(index + 1,s, target, nums, dp);  
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int s = 0;
        for(int i  : nums){
            s += i;
        }
        if(abs(target) > abs(s)|| (target + s)%2==1){return 0;}
        
        target = (target + s) /2;
        vector<vector<int>> dp(nums.size(), vector<int> (target + 1, -1));
        return f(0,0,target, nums, dp);
    }
};