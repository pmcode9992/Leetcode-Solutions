class Solution {
public:
    class myComp {
    public:
        bool operator()(pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mpp;
        for (int i : nums) {
            mpp[i]++;
        }
        vector<pair<int, int>> f;
        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            f.push_back({it->first, it->second});
        }
        sort(f.begin(), f.end(), myComp());
        vector<int> soln;
        for (int i = 0; i < k; i++) {
            soln.push_back(f[i].first);
        }
        return soln;
    }
};
