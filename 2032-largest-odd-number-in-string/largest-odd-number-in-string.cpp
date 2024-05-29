class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.length();i>0;i-- ){
            //cout<<num.substr(0,i+1)<<endl;
            if(stoi(num.substr(i-1,1)) %2 !=0){
                return num.substr(0,i);
            }
        }
        return "";
    }
};