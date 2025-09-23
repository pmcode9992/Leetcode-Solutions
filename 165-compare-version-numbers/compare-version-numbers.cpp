class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0, n1 = version1.size(), n2 = version2.size();
        string num1 = "", num2 = "";
        while(i < n1 || j < n2){
            num1 = "0";
            num2 = "0";
            //init numbers
            while(i < n1 && version1[i] != '.' ){
                num1 += version1[i];
                i++;
            }
            while(j < n2 && version2[j] != '.'){
                num2 += version2[j];
                j++;
            }
            if(stoi(num1) > stoi(num2)){
                return 1;
            }
            if(stoi(num1) < stoi(num2)){
                return -1;
            }
            i++;
            j++;
        }


        return 0;
    }
};