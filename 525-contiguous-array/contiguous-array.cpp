class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size(); 
        int psum = 0;
        int maxlen = 0;
        if(n == 1){
            return 0;
        }
        mpp[psum] = 0;
        for(int i = 0;i< n;i++){
            psum += nums[i] ? 1 : -1;
            if(!(mpp.count(psum))){
                mpp[psum] = i;
            }
            if(psum == 0){
                maxlen = max(maxlen, i + 1);
            }
            else{
                maxlen = max((i - mpp[psum]), maxlen);
            }
        }
        return maxlen;
    }
};