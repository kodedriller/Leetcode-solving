// 207. Course Schedule

class Solution{
    public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites){
        vector<vector<int>> adj(numCourses);
        vector<int> incoming(numCourses);

        for(auto& p:prerequisites){
            int u=p[1];
            int v=p[0];
            adj[u].push_back(v);
            incoming[v]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(incoming[i]==0)q.push(i);
        }
        int count =0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            count++;
            for(int v:adj[u]){
                incoming[v]--;
                if(incoming[v]==0)q.push(v);
            }
        }
        return count ==numCourses;
    }
};