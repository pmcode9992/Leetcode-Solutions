class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int m;
        while(l<=r){
            m = (r-l)/2 + l;
            if(nums[m] > target){
                r = m - 1;
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else{
                return m;
            }
        }
        if(target > nums[m]){
            return m + 1;
        }
        else{
            return m < 0? 0 : m;
        }
    }
};