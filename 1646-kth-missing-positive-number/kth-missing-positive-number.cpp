class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int m = 0;
        for(int i = 1;i<= arr.size() + k;i++){
            if(i < arr[m]){
                count++;
            }
            else if (i == arr[m]){
                if(m<arr.size()-1) m++;
            }
            else{
                count++;
            }
            if(count == k){
                return i;
            }
        }
        return -1 ;

    }
};