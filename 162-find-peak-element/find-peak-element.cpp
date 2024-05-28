class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 1;
        int r = nums.size() - 2;
        int m;
        int n = nums.size();
        if(nums.size() ==1){
            return 0;
        }
        if(nums[0] > nums[1]){
            return 0;
        }
        if(nums[n-1] > nums[n-2])
        {return n-1;}
        while (l <= r) {
            m = (r - l) / 2 + l;

            if (nums[m] > nums[m + 1] && nums[m] > nums[m - 1]) {
                return m;
            } else if (nums[m + 1] > nums[m]) {
                // check right
                l = m + 1;
            } else {
                // check left
                r = m - 1;
            }
        }
        return -1;
    }
};