class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>>adj(n);
        for(auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool>vis(n,false);
        queue<int>q;
        vector<int>ans;
        vis[source]=true;
        q.push(source);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==destination)return true;
            ans.push_back(node);
        
        for(int neighbour:adj[node]){
            if(!vis[neighbour]){
                vis[neighbour]=true;
                q.push(neighbour);
            }
            }
        }
        return false;
    }
};
