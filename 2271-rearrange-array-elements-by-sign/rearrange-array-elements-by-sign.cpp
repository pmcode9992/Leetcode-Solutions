class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a = 0, b = 0;
        bool sign = 1;
        vector<int> res(nums.size());
        // init
        while(nums[a] < 0){
            a++;
        }
        while(nums[b] > 0){
            b++;
        }
        //traverse & append
        for(int i = 0 ; i < nums.size() ; i++){
            if(sign){
                res[i] = nums[a++];
                sign = !sign;
            }
            else{
                res[i] = nums[b++];
                sign = !sign;
            }
            while(a < nums.size() && nums[a] < 0){
                a++;
            }
            while(b < nums.size() && nums[b] > 0){
                b++;
            }
        }
        return res;
    }
};