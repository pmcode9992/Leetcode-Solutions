class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long int r = nums[n - 1];
        long long int l =1 ;
        long long int m;
        long long int s=0 ;
        long long int soln;
        while(l<=r){
            m = (r-l)/2 + l;
            for(int i =0;i<n;i++){
                s+=ceil((double)nums[i]/(double)m);
            }
            if(s > threshold){
                //check right
                l = m + 1;
            }
            else{
                //check left
                soln = m;
                r = m - 1;
            }
            s=0;
        }
        return soln;
    }
};