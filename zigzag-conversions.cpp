//6. Zigzag Conversions


class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> rows(numRows);
        int row=0;
        bool down=true;
        for(char c:s){
            rows[row]+=c;
            if(row==0)down=true;
            else if(row==numRows-1)down=false;
            row+=down?1:-1;
        }
        string ans;
        for(string row:rows) ans+=row;
        return ans;
    }
};