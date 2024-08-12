class Solution {
public:
    int f(int index, bool buy, vector<int> &prices, vector<vector<int>> &dp){
        if(index == prices.size()){
            return 0;
        }
        if(dp[index][buy] != -1){
            return dp[index][buy];
        }
        if(buy){
            int take = -prices[index] + f(index +1 , 0, prices, dp);
            int notTake = f(index + 1, 1, prices, dp);
            return dp[index][buy] = max(take, notTake);
        }
        int take = prices[index] + f(index + 1, 1, prices, dp);
        int notTake = f(index + 1, 0, prices, dp);
        return dp[index][buy] = max(take, notTake);
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp (prices.size(), vector<int> (2,-1));
        return f(0,1, prices, dp);
    }
};