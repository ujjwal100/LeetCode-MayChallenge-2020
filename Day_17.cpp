// Time Complexity : O(N)
// Space Complexity : O(1)
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> m1(256,0) , m2(256,0), ans;
        for(auto i:p)
            m1[i]++;
        int ind=min(p.size() , s.size());
        for(int i=0;i<ind;i++)
            m2[s[i]]++;
        if(m1==m2)
                ans.push_back(0);
        for(int i=ind;i<s.size();i++){
            m2[s[i]]++;
            m2[s[i-ind]]--;
            if(m1==m2)
                ans.push_back(i-p.size()+1);
        }
        return ans;
        
    }
};
