class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> q;
        int start = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            while(!q.empty() && nums[q.back()] < nums[i]){
                q.pop_back();
            }
            q.push_back(i);
            if(i - start  + 1 == k){
                res.push_back(nums[q.front()]);
                if(q.front() == start){
                    q.pop_front();
                }
                start++;
            }
        }
        return res;

        
    }
};