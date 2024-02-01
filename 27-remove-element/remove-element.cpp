class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        vector<int> soln;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val){
            
            }
            else{
                soln.push_back(nums[i]);
                k++;
            }
            
        }
        nums.resize(soln.size());
        nums.swap(soln);
        return k;
        
    }
};