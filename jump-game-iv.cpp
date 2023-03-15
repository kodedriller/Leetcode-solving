class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0; 

        unordered_map<int, vector<int>> indices; 
        for (int i = 0; i < n; i++) {
            indices[arr[i]].push_back(i); 
        }

        vector<int> visited(n, 0); 
        visited[0] = 1; 
        queue<int> q{{0}}; 

        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int curr = q.front();
                q.pop();
                if (curr == n - 1) return steps; 
                
                if (curr + 1 < n && !visited[curr + 1]) {
                    visited[curr + 1] = 1;
                    q.push(curr + 1);
                }
                if (curr - 1 >= 0 && !visited[curr - 1]) {
                    visited[curr - 1] = 1;
                    q.push(curr - 1);
                }
                
                for (auto& index : indices[arr[curr]]) {
                    if (index != curr && !visited[index]) {
                        visited[index] = 1;
                        q.push(index);
                    }
                }
                indices[arr[curr]].clear(); 
            }
            steps++; 
        }

        return -1; 
    }
};
