// Time Complexity : O(N)
// Space Complexity : O(N)
// Here N = max(len(s1) , len(s2))
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> m1(256,0),m2(256,0);
        for(auto i : s1)
            m1[i]++;
        int ind = min(s1.size(),s2.size());
        for(int i=0;i<ind;i++)
            m2[s2[i]]++;
        if(m1==m2)
            return 1;
        for(int i=ind;i<s2.size();i++){
            m2[s2[i]]++;
            m2[s2[i-s1.size()]]--;
            if(m1==m2)
                return 1;
        }
        return 0;
    }
};
