class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double cursum = 0, maxsum = 0;
        int s = 0, e = 0;
        while(e < k){
            cursum += nums[e++];
            maxsum = cursum;
        }
        e--;
        while(e < nums.size() - 1){
            cursum += nums[++e];
            cursum -= nums[s++];
            maxsum = max(cursum, maxsum);
        }
        return maxsum / k;
    }
};