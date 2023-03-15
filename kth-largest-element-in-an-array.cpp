// 215. Kth Largest Element in an Array

//priotity queue
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int, vector<int>, greater<int>> p;
//             for(int i:nums){
//                 p.push(i);
//                 if(p.size()>k){
//                     p.pop();
//             }
//         }
//         return p.top();
//     }
// };

//quickselect
class Solution {
    public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        return qselect( nums,0, n-1,n+1-k );
    }
    int qselect(vector<int>& nums, int left, int right, int k){
        int pivot=part(nums,left, right);
        if(pivot==k-1) return nums[pivot];
        else if(pivot<k-1) return qselect(nums, pivot+1,right,k);
        else return qselect(nums,left,pivot-1,k);
    }
    int part(vector<int>& nums, int left,  int right){
        int pivot=nums[right];
        int i=left;
        for(int j=left;j<right;j++){
            if(nums[j]>=pivot){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[right]);
        return i;
    } 
};
