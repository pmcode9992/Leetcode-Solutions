class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, blue = nums.size() - 1, white = 0;
        while(white <= blue){
            if(nums[white] == 0){
                int temp = nums[white];
                nums[white] = nums[red];
                nums[red] = temp;
                red++;
                white++;
            }
            else if(nums[white] == 2){
                int temp = nums[blue];
                nums[blue] = nums[white];
                nums[white] = temp;
                blue--;
            }
            else{
                white++;
            }
        }
    }
};