// Time Complexity : O(N)
// Space Complexity : O(N)
class Solution {
public:
    bool dfs(int i, vector<bool>& todo ,vector<bool>& vis,vector<int> arr[] ){
        if(todo[i])
            return 0;
        if(vis[i])
            return 1;
        todo[i]=vis[i]=1;
        for(auto j : arr[i])
            if(!dfs(j,todo,vis,arr))
                return 0;
        todo[i]=0;
        return 1;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<int> arr[n];
        for(auto i : pre){            
            arr[i[1]].push_back(i[0]);
        }
        vector<bool>vis(n,0) , todo(n,0);
       
        for(int i=0;i<n;i++){
            if(!vis[i] && !dfs(i,todo,vis,arr))
                return 0;
        }
        return 1;
    }
};
