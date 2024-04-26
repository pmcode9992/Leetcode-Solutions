class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int smallestSoFar = prices[0];
        for(int i =1;i<n;i++){
            if((prices[i] - smallestSoFar) > maxProfit){
                maxProfit = prices[i] - smallestSoFar;
            }
            if(prices[i]<smallestSoFar){
                smallestSoFar = prices[i];
            }
        }
        return maxProfit;
    }
};