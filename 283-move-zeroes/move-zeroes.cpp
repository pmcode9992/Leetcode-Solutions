class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() > 1){

        
        
        int slow = 0;
        int fast = 1;
        int n = nums.size();
        for(fast =1;fast<n;fast++){
            if(nums[slow] == 0 && nums[fast]!=0){
                int temp = nums[slow];
                nums[slow] = nums[fast];
                nums[fast] = temp;
                slow ++;
            }
            else if(nums[slow]!=0){
                slow++;
            }
        }
    }
    }
};
//0 1 0 3 12
