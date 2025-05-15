class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int psum = 0, cnt = 0;
        int n = nums.size();
        for(int i =0 ;i< n ;i++){
            psum += nums[i];
            if(mpp.count(psum - k))
            {cnt += mpp[psum-k];}
            mpp[psum]++;
        }
        return cnt;

    }
};