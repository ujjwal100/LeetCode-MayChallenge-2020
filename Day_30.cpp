// Time Complexity : O(N*log(N))
// Space Complexity : O(N)
class Solution {
public:
    static bool compare(vector<int> &a , vector<int> &b){
        return (a[0]*a[0] + a[1]*a[1]) <= (b[0]*b[0] + b[1]*b[1]);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin() , points.end() , compare);
        vector<vector<int>> ans ;
        for(int i=0;i<K;i++)
            ans.push_back(points[i]);
        return ans;
    }
};
