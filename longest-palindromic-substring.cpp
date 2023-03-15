//5. Longest Palindromic Substring

//o(n^3)
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int n = s.length();
//         string ans = "";
        
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 string sub = s.substr(i, j-i+1);
//                 if (isPalindrome(sub) && sub.length() > ans.length()) {
//                     ans = sub;
//                 }
//             }
//         }
        
//         return ans;
//     }
    
// private:
//     bool isPalindrome(string s) {
//         int n = s.length();
//         for (int i = 0; i < n/2; i++) {
//             if (s[i] != s[n-i-1]) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };


// o(n^2)

// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int n = s.length();
//         if (n < 2) {
//             return s;
//         }
        
//         int start = 0, maxLen = 1;
//         for (int i = 0; i < n-1; i++) {
//             int len1 = expandAroundCenter(s, i, i);
//             int len2 = expandAroundCenter(s, i, i+1);
//             int len = max(len1, len2);
//             if (len > maxLen) {
//                 maxLen = len;
//                 start = i - (len-1)/2;
//             }
//         }
        
//         return s.substr(start, maxLen);
//     }
    
// private:
//     int expandAroundCenter(string s, int left, int right) {
//         int n = s.length();
//         while (left >= 0 && right < n && s[left] == s[right]) {
//             left--;
//             right++;
//         }
//         return right - left - 1;
//     }
// };


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        string ans = "";
        
        for (int len = 1; len <= n; len++) {
            for (int i = 0; i < n-len+1; i++) {
                int j = i+len-1;
                if (s[i] == s[j]) {
                    if (len <= 2 || dp[i+1][j-1]) {
                        dp[i][j] = true;
                        if (len > ans.length()) {
                            ans = s.substr(i, len);
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};
