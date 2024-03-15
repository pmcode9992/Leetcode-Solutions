class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zeroCount = 0;
        int zeroIndex = 0;
        vector<int> answer;
        int n = nums.size();
        for(int i : nums){
            if(i==0){
                zeroCount++;
                zeroIndex = i;
            }
            prod*=i;
        }

        if(zeroCount == 1){
            prod = 1;
            for(int i : nums){
                if(i!=0){
                    prod*=i;
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    answer.push_back(prod);
                }
                else{
                    answer.push_back(0);
                }
            }
            return answer;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                answer.push_back(0);
            }
            else{
                answer.push_back(prod/nums[i]);

            }
            
        }
        return answer;
    }
};