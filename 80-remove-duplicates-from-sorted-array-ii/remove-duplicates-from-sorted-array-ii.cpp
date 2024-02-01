class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int max = nums[nums.size()-1];
        int k=0;
        bool match = false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]&& match == false){
                match = true;
                k++;
            }
            else if(nums[i] == nums[i+1]&& match == true){
                nums[i] = max+1;
            }
            else{
                k++;
                match = false;
            }
        }
        sort(nums.begin() , nums.end());
        return k+1;

    }
};