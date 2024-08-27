class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s = 0;
        int e = 1;
        int n = nums.size();
        while(s < n - 1){
            if(nums[s] > nums[e]){
                swap(nums[s], nums[e]);
            }
            e++;
            if(nums[s] == 0 || e == n){
                s++;
                e = s + 1;
            }
        }
    }
};