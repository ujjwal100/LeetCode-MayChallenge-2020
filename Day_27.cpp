// Time Complexity : O(N)
// Space Complexity : O(N)
class Solution {
public:
    bool dfs(int i , int col , vector<int>& color , vector<vector<int>>& g){
       if(color[i]==-1)
       {
           color[i]=col;
           for(auto j : g[i]){               
               if(!dfs(j , 1-col ,color , g))
                   return 0;
           }
           return 1;
       }
        else if(color[i]==col)
            return 1;
        else
            return 0;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int> color(N+1, -1) ;
        vector<vector<int> > g(N+1);
            for(auto i : dislikes){
                g[i[0]].push_back(i[1]);
                g[i[1]].push_back(i[0]);
            }
        for(int i=1;i<=N;i++)
            if(color[i]==-1 && !dfs(i,1,color,g))
                return 0;
        return 1;
        
                
    }
};
