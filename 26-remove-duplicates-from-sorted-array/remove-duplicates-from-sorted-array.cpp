class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int n = nums.size();
        for(fast = 0;fast<n;fast++){
            if(nums[fast] != nums[slow]){
                slow++;
                nums[slow] = nums[fast];
                
            }
        }
        return slow + 1;
    }
};


