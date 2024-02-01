class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        int counter = 0;
        int m=0;
        int maxElement =0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                counter++;
            } 
            else {
                if (counter > m) {
                    maxElement = nums[i];
                    m = counter;
                }
                counter = 0;
            }
        }
        if (counter > m) {
            maxElement = nums[nums.size()-2];
        }
        return maxElement;
    }
};