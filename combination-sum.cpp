//39. Combination Sum


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> current;

        solve(candidates,target,current,result,0)
        return result;
    }

    void solve(vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& result, int start) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            solve(candidates, target - candidates[i], current, result, i);
            current.pop_back();
        }
    }
    
};