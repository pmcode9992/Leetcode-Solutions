class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int freq = 0;
        int fast = 1;
        for(fast = 1; fast < nums.size() ; fast++){
            if(nums[slow] == nums[fast]){
                freq++;
            }
            else{
                if(freq){
                    nums[slow + 1] = nums[slow];
                    nums[slow + 2] = nums[fast];
                    slow += 2;
                }
                else{
                    nums[slow + 1] = nums[fast];
                    slow++;
                }
                freq = 0;
            }
            
        }
        if(freq){
            nums[++slow] = nums[--fast];
        }
        
        return slow + 1;
    }
};