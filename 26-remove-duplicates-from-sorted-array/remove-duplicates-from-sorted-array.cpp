class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] = 101;
            }
            else{
                k++;
            }
        }
        sort(nums.begin(), nums.end());
        return k+1;
    }
    
    
};