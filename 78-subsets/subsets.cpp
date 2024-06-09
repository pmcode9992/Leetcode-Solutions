class Solution {
public:
    vector<int> getSubset(int n, vector<int> nums){
        vector<int> ss;
        int i = nums.size() - 1;
        while(n){
            if((n&1) == 1){
                ss.push_back(nums[i]);
            }
            i--;
            n >>= 1 ;
            
        }
        return ss;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int lim = pow(2, nums.size()) - 1 ;
        vector<vector<int>> soln;
        for(int i =0;i<=lim ;i++){
            vector<int> subset = getSubset(i, nums);
            soln.push_back(subset);
        }
        return soln;
    }
};