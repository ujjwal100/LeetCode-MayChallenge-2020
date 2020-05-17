// Time Complexity : O(N)
// Space Complexity : O(1)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> m1(256,0) , m2(256,0);
        for(auto i: ransomNote)
            m1[i]++;
        for(auto i: magazine)
            m2[i]++;
        for(int i=0;i<256;i++)
            if(m1[i] > m2[i])
                return 0;
        return 1;
            
    }
};
