class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size(); 
        vector<int> psum(n, 0);
        int maxlen = 0;
        if(n == 1){
            return 0;
        }
        psum[0] = (nums[0] == 0) ? -1 : 1;
        mpp[psum[0]] = 0;
        for(int i = 1;i< n;i++){
            if(nums[i] == 1){
                psum[i] = psum[i-1] + 1;
            }
            else{
                psum[i] = psum[i-1] - 1;
            }
            if(!(mpp.count(psum[i]))){
                mpp[psum[i]] = i;
            }
            if(psum[i] == 0){
                maxlen = max(maxlen, i + 1);
            }
            else{
                maxlen = max((i - mpp[psum[i]]), maxlen);
            }
        }
        return maxlen;
    }
};