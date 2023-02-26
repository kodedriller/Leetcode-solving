// 151. Reverse Words in a String
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, reversed;
        while (ss >> word) {
            if (!reversed.empty()) {
                reversed = " " + reversed;
            }
            reversed = word + reversed;
        }
        return reversed;
    }
};