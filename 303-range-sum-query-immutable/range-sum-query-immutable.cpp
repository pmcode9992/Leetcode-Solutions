class NumArray {
public:
    vector<int> summarr;
    NumArray(vector<int>& nums) {
        summarr = nums;
        int n = nums.size();
        for(int i = 1 ; i < n ; i++){
            summarr[i] += summarr[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return summarr[right];
        
        }
        return summarr[right] - summarr[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */