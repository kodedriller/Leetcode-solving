    // 30. Substring with Concatenation of All Words
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (words.empty() || s.empty()) return result;
        unordered_map<string, int> freq;
        for (const string& word : words) freq[word]++;
        int wordLen = words[0].size(), wordsCount = words.size(), sLen = s.size();
        for (int i = 0; i <= sLen - wordLen * wordsCount; i++) {
            unordered_map<string, int> seen;
            int j = 0;
            for (; j < wordsCount; j++) {
                string word = s.substr(i + j * wordLen, wordLen);
                if (freq.find(word) == freq.end()) break;
                seen[word]++;
                if (seen[word] > freq[word]) break;
            }
            if (j == wordsCount) result.push_back(i);
        }
        return result;
    }
};
