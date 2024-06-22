class Solution {
public:
    int cnt(vector<int> nums, int k){
        int right = 0;
        int left = 0;
        int count = 0;
        int sum = 0;
        while(right<nums.size()){
            sum += (nums[right] % 2);
            while(sum > k && left<=right){
                sum -= (nums[left] % 2);
                left++;
            }
            count += right - left + 1;
            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return cnt(nums, k) - cnt(nums, k-1);
    }
};