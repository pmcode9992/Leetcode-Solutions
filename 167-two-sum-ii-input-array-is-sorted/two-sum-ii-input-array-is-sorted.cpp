class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0, e = numbers.size() - 1;
        int sum = numbers[s] + numbers[e];
        while(s < e){
            if(sum < target){
                sum -= numbers[s++];
                sum += numbers[s];
            }
            else if(sum > target){
                sum -= numbers[e--];
                sum += numbers[e];
            }
            else{
                break;
            }
        }
        return {++s, ++e};
    }

};