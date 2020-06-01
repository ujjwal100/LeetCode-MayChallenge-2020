// Time Complexity : O(N)
// Space Complexity : O(N)
class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<char> s;
        for(char c : num){
            while(!s.empty() && c <s.top() && k ){
                s.pop();k--;
            }
            if(!s.empty() || c!='0')
                s.push(c);            
        }
        while(!s.empty() && k-- ){
            s.pop();
        }
        if(s.empty())
            return "0";
        string ans="";
        while(!s.empty()){
            ans = s.top() + ans;
            s.pop();
        }
        return ans;
    }
};
