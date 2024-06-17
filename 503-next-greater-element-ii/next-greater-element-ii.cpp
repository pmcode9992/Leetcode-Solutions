class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> soln(nums.size(), -1);

        for(int i = nums.size() - 1; i>=0 ;i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            if(!st.empty() && nums[st.top()] > nums[i]){
                soln[i] = nums[st.top()];
            }
            st.push(i);
        }
        for(int i = nums.size() - 1; i>=0 ;i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            if(!st.empty() && nums[st.top()] > nums[i]){
                soln[i] = nums[st.top()];
            }
            st.push(i);
        }
        
        return soln;
    }
};