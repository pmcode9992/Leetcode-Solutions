class Solution {
public:
    string reverseWords(string s) {
        string soln = "";
        string word = "";
        for(char i : s){
            if(i != ' '){
                word+= i;
            }
            else{
                cout<<word<<endl;
                if(word != ""){
                    soln = " " +word + soln;
                    word = "";
                }
            }
        }

        soln = word + soln;
        if(soln[0] == ' '){
            soln.erase(0,1);
        }
        return soln;
    }
};