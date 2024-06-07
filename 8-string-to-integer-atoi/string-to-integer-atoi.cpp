class Solution {
public:
    int myAtoi(string s) {
        if(s.size() < 1){
            return 0;
        }
        if(s[0] == ' '){
            return myAtoi(s.substr(1, s.size() -1));
        }
        if((s[0] < '0' || s[0] > '9') && s[0]!='-' && s[0]!='+'){
            return 0;
        }
        else{
            int end = s.size();
            for(int i =1; i< s.size();i++){
                if(s[i] >= '0' && s[i] <='9'){
                    i++;
                }
                else{
                    end = i;
                    break;
                }
            }
            try{
                return stoi(s);
            }
            catch(out_of_range e){
                return s[0] == '-'? INT_MIN : INT_MAX;
            }
            catch(exception e){
                //cout<<e<<endl;
                return 0;
            } stoi(s.substr(0, end));
        }
        return 0;

    }
};