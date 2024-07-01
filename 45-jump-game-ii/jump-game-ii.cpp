class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> minStep(n,n);
        minStep[n-1] =0;
        for(int i = n-1;i>=0;i--){
            int ms = minStep[i];
            for(int j = 0 ;i + j < n && j<=nums[i];j++){
                ms = min(minStep[i + j] + 1, ms);
            }
            minStep[i] = ms;
        }
        return minStep[0];
    }
};