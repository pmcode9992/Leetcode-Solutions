class Solution {
public:
    bool f(int index, int sumSet, vector<int> &nums, int s, vector<vector<int>> &dp){
        if(sumSet == s){
            return true;
        }
        if(sumSet > s){
            return false;
        }
        if(index == nums.size()){return false;}
        if(dp[index][sumSet]!= -1){return dp[index][sumSet];}
        return dp[index][sumSet] = f(index + 1, sumSet + nums[index], nums, s, dp) || f(index + 1, sumSet, nums, s, dp);
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int i : nums){
            s +=i;
        }
        if(s %2 == 1){return false;}
        vector<vector<int>> dp(n, vector<int> ((s/2) + 1, -1));
        return f(0,0,nums, (s/2), dp);
    }
};