class Solution {
public:
    void getCombi(int index, vector<int> visited, vector<vector<int>> &soln, int k, int n){
        if(index > 10 || n < 0){
            return;
        }
        if(n == 0 && visited.size() == k){
            soln.push_back(visited);
        }
        for(int i = index;i <= 9;i++){
            visited.push_back(i);
            getCombi(i + 1, visited, soln, k , n - i);
            visited.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> soln;
        getCombi(1,{}, soln, k, n);
        return soln;
    }
};