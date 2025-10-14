class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1, cap = 0, minelem = INT_MAX;

        while(start < end){
            minelem = min(height[start], height[end]);
            cap = max(cap, (end - start) * minelem);
            if(height[start] < height[end]){
                start++;
            }
            else{
                end--;
            }

        }
        return cap;
    }
};