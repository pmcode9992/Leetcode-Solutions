class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int neg = -1;
        int pos = -1;
        // set neg and pos
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0 && pos == -1) {
                pos = i;
            }
            if (nums[i] < 0 && neg == -1) {
                neg = i;
            }
            if (pos != -1 && neg != -1) {
                break;
            }
        }
        vector<int> soln;
        while (pos < n && neg < n) {
            if (pos < n) {
                soln.push_back(nums[pos]);
                pos++;
            }
            if (neg < n) {
                soln.push_back(nums[neg]);
                neg++;
            }

            //reset pos and neg
            for(neg;neg<n;neg++){
                if(nums[neg]<0){
                    break;
                }
            }
            for(pos;pos<n;pos++){
                if(nums[pos]>0){
                    break;
                }
            }
        }
        return soln;
    }
};