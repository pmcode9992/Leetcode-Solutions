class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<pair<int, int>> heap;
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            heap.push_back({it.second, it.first});
        }
        make_heap(heap.begin(), heap.end());
        for(int i = 0 ; i < k ; i++){
            res.push_back(heap.front().second);
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();
        }
        return res;
    }
};