class Solution {
public:
    int maxSum(vector<int>& arr , int n){
        int ans = INT_MIN, sum=0;
        for(int i=0;i<n;i++){
          sum+=arr[i];
          ans= max(ans,sum);
          if(sum<0)
          sum=0;
        }
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int n=A.size() , a;
        vector<int> pre(n) , suf(n);
        a=pre[0]=A[0];
        for(int i=1;i<n;i++){
            a+= A[i];
            pre[i]= max(pre[i-1] , a);
        }
        a=suf[n-1]=A[n-1];
        for(int i=n-2;i>=0;i--){
            a+=A[i];
            suf[i]=max(suf[i+1] , a);
        }
        
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++)
            ans = max(ans , pre[i]+suf[i+1]);
        ans = max(ans , maxSum(A,n));
        return ans;
        
    }
};
