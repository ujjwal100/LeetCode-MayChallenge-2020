//Time Complexity : O(NlogN)
//Space Complexity : O(N)
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int >m;
        string s1="";
        for(auto i:s)
            m[i]++;
        priority_queue< pair<int , char> >pq;
        for(auto i:m)
            pq.push( {i.second,i.first});
        while(!pq.empty()){
            auto t=pq.top();
            pq.pop();
            while((t.first)--)
            {
                s1+=t.second;
            }
            
            
        }
        return s1;
    }
};
