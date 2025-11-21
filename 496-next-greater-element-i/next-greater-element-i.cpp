class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mpp;

        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                mpp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        while (!st.empty()) {
            mpp[st.top()] = -1;
            st.pop();
        }

        for (int &x : nums1) {
            x = mpp[x];
        }

        return nums1;
    }
};
