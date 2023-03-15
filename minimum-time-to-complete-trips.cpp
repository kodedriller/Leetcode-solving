// 2187. Minimum Time to Complete Trips
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left = 0;
        long long right = 1e18;
        while (left < right) {
            long long mid = left + (right - left) / 2;
            __int128 count = 0;
            for (int i = 0; i < time.size(); i++) {
                count += mid /time[i];
            }
            if (count >= totalTrips) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
