class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int smallestSoFar = prices[0];
        for(int i =1;i<n;i++){
            maxProfit = max(prices[i] - smallestSoFar, maxProfit);
            smallestSoFar = min(prices[i], smallestSoFar);
        }
        return maxProfit;
    }
};