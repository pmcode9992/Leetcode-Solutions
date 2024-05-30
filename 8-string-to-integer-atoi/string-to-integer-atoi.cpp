class Solution {
public:
    int myAtoi(string s) {
        int start = 0;
        int end = 0;
        bool negative = false;

        // remove whitespaces
        while (start < s.length() && s[start] != '-' && s[start] != '+' &&
               (s[start] < '0' || s[start] > '9')) {
            if (s[start] != ' ') {
                return 0;
            }
            start++;
        }
        // set negative
        if (start < s.length() && s[start] == '-') {
            negative = true;
            start++;
        }
        if (start < s.length() && s[start] == '+' && negative != true) {
            negative = false;
            start++;
        }

        // remove leading 0s
        while (s[start] == '0') {
            start++;
        }

        // set start and end
        end = start;
        // cout<<end;
        while (end < s.length() && (s[end] >= '0' && s[end] <= '9')) {
            end++;
        }

        if (start == end) {
            return 0;
        }
        string soln = s.substr(start, end - start);
        cout << soln;

        if (negative == true) {
            try {
                return -1 * stoi(soln);
            } catch (exception e){
                return INT_MIN;
            }
        } else {
            try {
                return stoi(soln);
            } catch (exception e){
                return INT_MAX;
            }
        }
        // if (soln.length() >= 10 && negative == false) {
        //     try {
        //         return stoi(soln);
        //     } catch (exception e) {
        //         return INT_MAX;
        //     }
        // }
        // if (soln.length() >= 10 && negative == true) {
        //     return (INT_MIN);
        // }
        // if (negative) {
        //     return -(stoi(soln));
        // }
        return stoi(soln);
    }
};