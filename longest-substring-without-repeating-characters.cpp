// 3. Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> un_set;
        int l=0,r=0,len=0;
        while(r<s.size()){
            if(un_set.find(s[r])==un_set.end()){
                un_set.insert(s[r]);
                len=max(len,r-l+1);
                r++;
            }else{
                un_set.erase(s[l]);
                l++;
            }
        }
        return len;
    }
};
