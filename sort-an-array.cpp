// 912. Sort an Array

//using buikt int function
// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };



//without using built in function

// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         priority_queue<int> pq;
//         for(int i=0; i<nums.size(); i++){
//             pq.push(-nums[i]);
//         }
//         vector<int> ans;
//         while(!pq.empty()){
//             ans.push_back(-pq.top());
//             pq.pop();
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
