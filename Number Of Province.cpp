class Solution {
public:
    void dfs(int city,vector<vector<int>>& isConnected,vector<int>&visited){
        visited[city]=1;
        for(int neighbour=0;neighbour<isConnected.size();neighbour++){
            while(isConnected[city][neighbour]==1 && !visited[neighbour]){
                dfs(city,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
              int n=isConnected.size();
             vector<int>visited(n,0);
             int province=0;
            for(int city=0;city<n;city++){
                if(!visited[city]){
                    province++;
                    dfs(city,isConnected,visited);
                }
            }
        return province;      
    }
     
    
};
