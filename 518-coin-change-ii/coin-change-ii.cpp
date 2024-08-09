class Solution {
public:
    int f(int index, int currAmt, int amount, vector<int> &coins, vector<vector<int>> &dp){
        if(index == 0){
            if(currAmt % coins[0] == 0){return 1;}
            return 0;
        }
        if(dp[index][currAmt] !=-1){
            return dp[index][currAmt];
        }
        int take = 0;
        int notTake = 0;
        if(currAmt - coins[index] >=0)take = f(index, currAmt - coins[index], amount, coins, dp);
        if(index >0 )  notTake = f(index - 1, currAmt, amount, coins, dp);
        return dp[index][currAmt] = take + notTake;

    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int> (amount + 1, -1));
        return f(coins.size() - 1, amount, amount, coins, dp);
    }
};