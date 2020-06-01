// Time Complexity : O(log(n))
// Space Complexity : O(1) 
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0 , h=nums.size()-1;
        while(l<h){
            int mid = l+(h-l)/2;
            if(mid&1)
                mid--;
            if(nums[mid]!=nums[mid+1])
                h=mid;
            else l=mid+2;
        }
        return nums[l];
    }
};
