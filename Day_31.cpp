// Time Complexity : O(N*M)
// Space Complexity : O(N*M)

class Solution {
public:
    int f(string &x , string &y , int m , int n , vector<vector<int>> &dp){
        if(m==0)
            return n;
        if(n==0)
            return m;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(x[m-1]==y[n-1])
            dp[m][n]= f(x,y,m-1,n-1,dp);
        else
            dp[m][n]= 1+ min( f(x,y,m-1 ,n-1, dp) , min(f(x,y,m-1,n,dp) , f(x,y,m,n-1,dp)));
        return dp[m][n];
        
        
    }
    int minDistance(string word1, string word2) {
        int m= word1.length() , n= word2.length();
        vector<vector <int> > dp ( m+1, vector<int>(n+1 , -1) );
        return f(word1 , word2 , m ,n , dp);
    }
};
