// Time Complexity : O(N)
// Space Complexity : O(N)
// Here N = max(len(S) , len(L))

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> s;
        for(auto i:J)
            s.insert(i);
        int c=0;
        for(auto i:S)
            if(s.count(i))
                c++;
        return c;
    }
};
