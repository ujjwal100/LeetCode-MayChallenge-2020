// Time Complexity : O(N)
// Space Complexity : O(N)
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int , int> m;
        m[0]=-1;
        int c=0 , ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i])
                c++;
            else
                c--;
            if(m.count(c))
                ans = max( ans , i- m[c] );
            else
                m[c]=i;
        }
        return ans;
    }
};
