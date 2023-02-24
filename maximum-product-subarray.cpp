
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int max_product = nums[0];
        int curr_max = nums[0];
        int curr_min = nums[0];
        for (int i = 1; i < n; i++)
        {
            int temp_max = curr_max * nums[i];
            int temp_min = curr_min * nums[i];
            curr_max = max(nums[i], max(temp_max, temp_min));
            curr_min = min(nums[i], min(temp_max, temp_min));
            max_product = max(max_product, curr_max);
        }

        return max_product;
    }
};