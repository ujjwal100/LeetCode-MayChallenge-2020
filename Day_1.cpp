// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution { // Time Complexity : O(log(n)), Space Complexity : O(1)
public:
    int firstBadVersion(int n) {
        int l=1 , h=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(isBadVersion(mid) && (mid==1 ||!isBadVersion(mid-1) ))
                return mid;
            else if(isBadVersion(mid))
                h=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
};
