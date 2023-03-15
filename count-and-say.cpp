
// 38. Count and Say

class Solution{
    public:
    string countAndSay(int n) {
        if(n==1)return"1";
        string prev=countAndSay(n-1);
        string ans="";
        int count=1;
        char say=prev[0];
        for (int i = 1; i < prev.size(); i++){
            if(prev[i]==say)count++;
            else{
                ans+=to_string(count)+say;
                count =1;
                say=prev[i];
            }
        }
         ans+=to_string(count)+say;


        return ans;
    }
};