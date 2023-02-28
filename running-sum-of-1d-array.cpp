// 1480. Running Sum of 1d Array

class Solution {
public:
        int prefixSum(vector<int>& nums)
        n=nums.size();
        vector<int> sum;
        for(int i=0;i<n;i++){
            sum+=sum+nums[i];
            sum.push_back();
        }
        return sort(nums.begin(), nums.end());
    }
};
