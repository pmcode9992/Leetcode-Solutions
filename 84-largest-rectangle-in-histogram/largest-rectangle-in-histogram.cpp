class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int  n = heights.size(), res = 0;
        vector<int> nse(n, 0), rnse(n, 0);
        stack<int> st;
        for(int i = 0 ; i < n ; i++ ){
            while(!st.empty() && heights[st.top()] > heights[i]){
                nse[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            nse[st.top()] = n - st.top();
            st.pop();
        }
        for(int i = n - 1 ;i >= 0 ; i--){
            while(!st.empty() && heights[st.top()] > heights[i]){
                rnse[st.top()] = st.top() - i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            rnse[st.top()] = st.top() + 1;
            st.pop();
        }

        for(int i = 0 ; i < n ; i++){
            res = max(res, (nse[i] + rnse[i] - 1) * heights[i]);
        }
        return res;

        
    }
};