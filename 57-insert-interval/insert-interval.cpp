class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        vector < vector<int>> soln;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        if(n== 1){return intervals;}
        for(int i = 0 ;i< n - 1;i++){
            if(intervals[i][1] < intervals[i+1][0] ){
                soln.push_back(intervals[i]);
            }
            else{
                intervals[i][1] = max(intervals[i][1], intervals[i+1][1]);
                intervals[i+1] = intervals[i];
            }

        }
        soln.push_back(intervals[n-1]);
        return soln;
    }
};