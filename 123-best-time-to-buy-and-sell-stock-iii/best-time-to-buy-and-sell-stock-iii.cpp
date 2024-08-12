class Solution {
public:
    int f(int index, bool buy, int cap, vector<int>& prices, vector<vector<vector<int>>> &dp){
        if(index == prices.size()){
            return 0;
        }
        if(cap == 0){
            return 0;
        }
        if(dp[index][buy][cap]!= -1){
            return dp[index][buy][cap];
        }
        int take = 0;
        int notTake= 0;
        if(buy){
             take = -prices[index] + f(index + 1, 0, cap, prices, dp);
             notTake = f(index + 1, 1, cap, prices, dp);
        }
        else{
             take = prices[index] + f(index + 1, 1, cap - 1, prices, dp);
             notTake = f(index + 1, 0, cap, prices, dp);
        }
        return dp[index][buy][cap] = max(take, notTake);
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int> (3, -1)));

        return f(0,1,2, prices, dp);
    }
};