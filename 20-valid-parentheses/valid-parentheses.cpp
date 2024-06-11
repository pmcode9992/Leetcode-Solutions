class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> braks;
        braks.insert({')', '('});
        braks.insert({'}', '{'});
        braks.insert({']', '['});

        stack<char> st;
        for(char ch : s){
            if(braks[ch]){
                //its a closing brakett
                if(st.empty() || st.top()!= braks[ch]){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else{
                st.push(ch);
            }
        }
        return st.empty() ? true : false;
    }
};