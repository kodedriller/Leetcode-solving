// 977. Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=(nums[i]*nums[i]) ;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
// class Solution {
//     public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(auto num:nums) 
//             num=num*num;
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };