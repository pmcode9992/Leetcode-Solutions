class Solution {
public:
    int f(int index, bool buy, vector<int> &prices, int fee, vector<vector<int>> &dp){
        if(index == prices.size()){
            return 0;
        }
        if(dp[index][buy] != -1){
            return dp[index][buy];
        }
        int take;
        int notTake;
        if(buy){
            take = -fee - prices[index] + f(index + 1, 0, prices, fee, dp);
            notTake = f(index + 1, 1, prices, fee, dp);
        }
        else{
            take = prices[index] + f(index + 1, 1, prices, fee, dp);
            notTake =  f(index + 1, 0, prices, fee, dp);
        }
        return dp[index][buy] = max(take, notTake);
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n , vector<int> (2, -1));
        return f(0,1,prices, fee, dp);
    }
};