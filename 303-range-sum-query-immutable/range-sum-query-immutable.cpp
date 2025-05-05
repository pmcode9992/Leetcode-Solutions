class NumArray {
public:
    vector<int> sumarr;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> psum(n+1, 0);
        for(int i = 0;i < n ;i++){
            psum[i+1] = psum[i] + nums[i];
        }
        sumarr.insert(sumarr.begin(), psum.begin(), psum.end());
    }
    int sumRange(int left, int right) {
        return sumarr[right + 1] - sumarr[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */