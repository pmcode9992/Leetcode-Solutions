class Solution {
public:
    void letCombi(int index, string possibility, map<char, vector<char>> mpp, vector<string> &soln, string digits){
        if(possibility.length() == digits.length()){
            soln.push_back(possibility);
            return;
        }
        if(index == digits.length()){
            return;
        }
        for(char ch : mpp[digits[index]]){
            possibility += ch;
            letCombi(index + 1, possibility, mpp, soln, digits);
            possibility.erase((possibility.length() - 1), 1);
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, vector<char>> mpp = {
            {'2', {'a', 'b', 'c'}}, {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}}, {'5', {'j', 'k', 'l'}},
            {'6', {'m', 'n', 'o'}}, {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}}, {'9', {'w', 'x', 'y', 'z'}}};
        vector<string> soln;
        if(digits.length() == 0){
            return soln;
        }
        letCombi(0, "", mpp, soln, digits);
        return soln;
    }
};