class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> cpy;
        for(int i : nums){
            cpy.push_back(i);
        }
        sort(cpy.begin(), cpy.end());
        int n = nums.size();
        int min  = 0;
        for(int i = n-1;i>=0;i--){
            if(nums[i] == cpy[0] && i>0 && nums[i-1] != cpy[0]){
                min = i;
                break;
            }
        }
        for(int i =0;i<n;i++){
            if(cpy[i] != nums[min]){
                return false;
            }
            min= (min + 1 )%n;
        }
        return true;
    }
};