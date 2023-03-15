//1539. Kth Missing Positive Number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lastseen=0;
        for(int i=0;i<arr.size();i++){
            int missing=arr[i]-lastseen-1;
            if(k<=missing){
                return lastseen+k;
            }
            k-=missing;
            lastseen=arr[i];
        }
        return lastseen +k;
    }
};