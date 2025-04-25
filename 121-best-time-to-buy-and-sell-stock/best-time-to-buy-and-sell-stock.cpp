class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = 0;
        int mp = 0;
        for(int i = 1; i< prices.size() ;i++){
            mp = max(prices[i] - prices[s], mp);
            s = prices[i] < prices[s] ? i : s;
        }
        return mp;
    }
};