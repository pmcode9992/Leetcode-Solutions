class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum = 0, csum = 0;
        for(int i = 0 ; i < nums.size() ;i++){
            if(i < k){
             max_sum += nums[i];
             csum += nums[i];
            }
            else{
                max_sum = max((csum + nums[i] - nums[i - k]), max_sum);
                csum += nums[i] - nums[i-k];
            }
        }
        return max_sum / k;
    }
};