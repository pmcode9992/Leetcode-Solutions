class Solution {
public:
    void combi(int i, int currSum, vector<vector<int>> &soln, vector<int> &currCombi,vector<int> candidates, int target){
        if(currSum > target){
            //backtrack
            currCombi.pop_back();
            return;
        }
        if(currSum == target){
            soln.push_back(currCombi);
            //backtrack
            currCombi.pop_back();
            return;
        }
        if(i >= candidates.size()){
            currCombi.pop_back();
            return;
        }
        currCombi.push_back(candidates[i]);
        currSum += candidates[i];
        combi(i, currSum, soln, currCombi, candidates, target);
        currSum -= candidates[i];
        combi(i + 1, currSum, soln, currCombi, candidates, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> soln;
        vector<int> currCombi;
        combi(0, 0, soln,currCombi,candidates, target);
        return soln;
    }
};