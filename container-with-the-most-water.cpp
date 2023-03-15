// 11. Container With Most Water

class Solution {
    public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int max_area = INT_MIN;
        
        while (left < right) {
            int area = 0;
            if (height[left] < height[right]) {
                area = height[left] * (right - left);
                left++;
            } else {
                area = height[right] * (right - left);
                right--;
            }
            max_area = max(max_area, area);
        }
        
        return max_area;
    }
};
