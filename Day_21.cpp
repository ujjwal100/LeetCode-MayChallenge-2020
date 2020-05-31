// Time Complexity : O(M*N)
// Space Complexity : O(M*N)
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m= matrix.size() , n=matrix[0].size() , ans=0;
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                if(matrix[i][j])
                    matrix[i][j]= 1+ min( matrix[i-1][j-1] , 
                                min( matrix[i-1][j] , matrix[i][j-1]));              
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans += matrix[i][j];
        return ans;     
    }
};
