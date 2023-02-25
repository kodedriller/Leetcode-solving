// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int max_sum = nums[0];
//         int curr_sum = nums[0];
//         for (int i = 1; i < nums.size(); i++) {
//             curr_sum = max(nums[i], curr_sum + nums[i]);
//             max_sum = max(max_sum, curr_sum);
//         }
//         return max_sum;
//     }
// };


// using dp
class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        vector<int> dp(nums.size());
        dp[0]=nums[0];
        int max_sum=dp[0];
        for(int i=1;i<nums.size();i++){
            dp[i]=max(nums[i],dp[i-1]+nums[i]);
            max_sum=max(max_sum,dp[i]);
        }
        return max_sum;
    }
};