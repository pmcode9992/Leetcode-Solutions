class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        int start = 0 , end = 0, n = nums.size();
        vector<int> res;
        while(end < n){
            while(!q.empty() && q.back() < nums[end]){
                q.pop_back();
            }
            q.push_back(nums[end]);
            if(end - start  + 1 == k){
                res.push_back(q.front());
                if(q.front() == nums[start]){
                    q.pop_front();
                }
                start++;
            }
            end++;
        }
        return res;
        
    }
};
