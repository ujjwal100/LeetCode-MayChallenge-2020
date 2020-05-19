// Time Complexity : O(log(num))
// Space Complexity : O(1)
class Solution {
public:
    int findComplement(int num) {
        long long c=0,n=num;
        while(num){
            c++;
            num>>=1;
        }
        return (int) (n^ ((long long)(1<<c)-1));
    }
};
