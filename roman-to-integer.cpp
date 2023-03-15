// 13. Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int prevValue = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int curValue = 0;
            switch (s[i]) {
                case 'I':
                    curValue = 1;
                    break;
                case 'V':
                    curValue = 5;
                    break;
                case 'X':
                    curValue = 10;
                    break;
                case 'L':
                    curValue = 50;
                    break;
                case 'C':
                    curValue = 100;
                    break;
                case 'D':
                    curValue = 500;
                    break;
                case 'M':
                    curValue = 1000;
                    break;
                default:
                    break;
            }
            if (curValue < prevValue) {
                total -= curValue;
            } else {
                total += curValue;
            }
            prevValue = curValue;
        }
        return total;
    }
};
