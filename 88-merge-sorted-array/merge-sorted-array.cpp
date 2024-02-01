class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> soln;
        int i=0;
        int j=0;
        while(j<n && i<m){
            if(nums1[i]<=nums2[j]){
                soln.push_back(nums1[i]);
                i++;
            }
            else{
                soln.push_back(nums2[j]);
                j++;
            }

        }
        while(j<n){
            soln.push_back(nums2[j]);
            j++;
        }
        while(i<m){
            soln.push_back(nums1[i]);
            i++;
        }
        for(i=0;i<m+n;i++){
            nums1[i] = soln[i];
        }
    }
};