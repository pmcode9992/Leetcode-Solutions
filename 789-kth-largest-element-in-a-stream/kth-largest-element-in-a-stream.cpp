class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    KthLargest(int k, vector<int>& nums) {
        for(int i : nums){
            pq.push(i);
        }
        while(pq.size()>k){
            pq.pop();
        }
        this->k = k;

    }
    
    int add(int val) {
        if(pq.empty() || pq.size()<k){
            pq.push(val);
            return pq.top();
        }
        pq.push(val);
        pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */