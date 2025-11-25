class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> heap;
        unordered_map<int, int> mpp;
        vector<int> res;
        for(int i = 0 ;i< nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i : mpp){
            heap.push_back({i.second, i.first});
        }
        make_heap(heap.begin(), heap.end());
        for(int i = 0;i< k;i++){
            res.push_back(heap.front().second);
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
        }

        return res;
    }
};