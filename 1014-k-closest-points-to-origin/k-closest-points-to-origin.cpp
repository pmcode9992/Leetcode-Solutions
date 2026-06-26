class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>> pq;
        for(int i = 0; i < points.size() ;i++){
            double dist = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            pq.push({dist, i});
            if(pq.size() > k){
                pq.pop();
            }
        }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(points[pq.top().second]);
            pq.pop();
        }
        return res;

        
        
    }
};