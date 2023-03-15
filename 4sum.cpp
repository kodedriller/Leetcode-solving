// 18. 4sum
//worng answer tle
class Solution {
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                int left = j + 1;
                int right = n - 1;
                while (left < right) {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        vector<int> quadruplet = {nums[i], nums[j], nums[left], nums[right]};
                        s.insert(quadruplet);
                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        for (auto it = s.begin(); it != s.end(); it++) {
            result.push_back(*it);
        }
        return result;
    }
};
