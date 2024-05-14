class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        int maxi = 0;
        int c = 0;
        for(int i =0 ;i<n;i++){
            st.insert(nums[i]);
        }
        n = st.size();
        for(auto it = st.begin();it!=st.end();it++){
            cout<<*it<< " ";
        }
        cout<<endl;
        auto it = st.begin();
        while(it!=st.end()){
            if(*(it) + 1 == *(++it)){
                c++;
            }
            else{
                maxi = max(maxi, c + 1);
                c=0;
            }
        }
        maxi = max(maxi, c);
        return maxi;
    }
};