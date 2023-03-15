// 14. Longest Common Prefix

// class Solution{
//     public:
//     string longestCommonPrefix(vector<string>& strs){
//         if(strs.empty()) return "";
//         string prefix =strs[0];
//         for(int i=1;i<strs.size();i++){
//             while(strs[i].find(prefix)!=0){
//                 prefix=prefix.substr(0, prefix.length()-1);
//                 if(prefix.empty())return "";
//             }
//         }
//         return prefix;
//     }
// };

class Solution{
    public:
    string longestCommonPrefix(vector<string>& strs){
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string prefix =strs[0];
        for(int i=0;i<prefix.size();i++){
            if(prefiz[i]!=strs[strs.size()-1][i])return prefix.substr(0,i);
        }
        return prefix;
    }
};