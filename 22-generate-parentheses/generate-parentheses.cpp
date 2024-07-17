class Solution {
public:
    void genParan(string st, vector<string> &soln, int open,int closed, int n){
        if(open == closed && open + closed == n * 2){
            soln.push_back(st);
            return;
        }
        if(open < n){
            genParan(st + "(" , soln, open + 1, closed, n);
        }
        if(closed < open){
            genParan(st + ")", soln , open , closed + 1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> soln;
        genParan("", soln, 0,0, n);
        return soln;
    }
};