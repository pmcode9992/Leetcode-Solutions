class Solution {
public:

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n ==1){
            return;
        }

        int l = 0;
        int  r = 0;

        //set index
        while(r<n-1){
            if(nums[r] < nums[r+1]){
                l =r;
            }
            r++;
        }
        
        if(l==0 && nums[l+1] < nums[l]){
            sort(nums.begin(), nums.end());
            return;
        }
        sort(nums.begin() + l + 1, nums.end());
        for(int i =0 ;i< n;i++){
            cout<<nums[i]<< " ";
        }

        //find l-1's next greatest value
        for(int i = l ;i<n;i++){
            if(nums[i] > nums[l]){
                swap(&nums[i], &nums[l]);
                break;
            }
        }
        return;


    }
};