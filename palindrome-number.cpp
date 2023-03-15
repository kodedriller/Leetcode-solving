// 9. Palindrome Number

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) {
//             return false;
//         }
//         string s = to_string(x);
//         int n = s.length();
//         for (int i = 0; i < n / 2; i++) {
//             if (s[i] != s[n - i - 1]) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };


//Follow up: Could you solve it without converting the integer to a string?

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0)&&x!=0) {
            return false;
        }
        if(x==0){
            return true;
        }
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return x == rev || x == rev / 10;
    }
};
