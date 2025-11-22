class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st, stl;
        vector<int> nse(heights.size(), -1);
        vector<int> nsel(heights.size(), -1);
        int area = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                nse[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        for(int i = heights.size() - 1; i >= 0 ; i--){
            while(!stl.empty() && heights[stl.top()] > heights[i]){
                nsel[stl.top()] = stl.top() - i - 1;
                stl.pop();
            }
            stl.push(i);
        }
        while(!stl.empty()){
            nsel[stl.top()] = stl.top();
            stl.pop();
        }
        while(!st.empty()){
            nse[st.top()] = heights.size() - st.top();
            st.pop();
        }
        for(int i = 0 ; i< heights.size() ; i++){
            area = max((heights[i] * (nse[i] + nsel[i])), area);
        }
        return area;
    }
};