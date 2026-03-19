class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> arr;
        for(int i = 0 ; i < position.size() ; i++){
            arr.push_back({position[i], speed[i]});
        }
        sort(arr.rbegin(), arr.rend());
        stack<double> st;
        for(auto p : arr){
            double tt = (double)(target - p.first)/p.second;
            if(st.empty() || st.top() < tt){
                st.push(tt);
            }
        }
        return st.size();
        
    }
};