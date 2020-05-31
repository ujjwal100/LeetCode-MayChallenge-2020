// Time Complexity : O(N)
// Space Complexity : O(N)
class Solution {
public:
    void f(vector<vector<int>>& im, int sr, int sc, int col ,vector<vector<int>>& vis,int col2 ){
        int n= im.size(), m=im[0].size();
        im[sr][sc]=col;
        vis[sr][sc]=1;
        int a[]={sr,sr,sr-1,sr+1};
        int b[]={sc-1,sc+1,sc,sc};
        
        for(int i=0;i<4;i++)
            if(a[i]>=0 && a[i]<n && b[i] >=0 && b[i]<m && !vis[a[i]][b[i]] && im[a[i]][b[i]]==col2)
                f(im,a[i],b[i],col,vis,col2);
                
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n= image.size(), m=image[0].size();
        vector<vector<int> > vis(n , vector<int>(m , 0));
        f(image,sr,sc,newColor,vis,image[sr][sc]);
        return image;
    }
};
