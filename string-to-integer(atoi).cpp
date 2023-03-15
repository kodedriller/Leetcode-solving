//8. String to Integer (atoi)

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, result = 0;
        while (s[i] == ' ') {
            i++;
        }
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (isdigit(s[i])) {
            int digit = s[i] - '0';
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == -1) ? INT_MIN : INT_MAX;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};
