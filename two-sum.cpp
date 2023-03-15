// 1. Two Sum

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target){
//                    return {i ,j};
//                 }
//             }
//         }
//         return {};      
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_table;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash_table.count(complement)) {
                return {hash_table[complement], i};
            }
            hash_table[nums[i]] = i;
        }
        return {};
    }
};

