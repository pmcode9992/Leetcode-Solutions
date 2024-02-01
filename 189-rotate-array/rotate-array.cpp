class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return;
        }
       for(int i=0;i<(n - (k%n));i++){
           nums.push_back(nums[i]);
       }
       nums.erase(nums.begin(), nums.begin() +(n - (k%n)));
    }
};