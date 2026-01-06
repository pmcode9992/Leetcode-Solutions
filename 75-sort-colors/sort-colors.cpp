class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0;
        for(j = 0 ; j < nums.size() ; j++){
            if(nums[j] == 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
        for(j = i ; j < nums.size() ; j++){
            if(nums[j] == 1){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};