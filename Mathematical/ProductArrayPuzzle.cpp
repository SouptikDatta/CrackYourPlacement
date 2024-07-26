#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        long long int  leftArr[n];
        long long int  rightArr[n];
        
        leftArr[0] = 1;
        for(int i = 1; i < n; i++) {
            leftArr[i] = leftArr[i-1] * nums[i-1];
        }
        
        rightArr[n-1] = 1;
        for(int i = n-2; i >= 0; i--) {
            rightArr[i] = rightArr[i+1] * nums[i+1];
        }
        
        vector<long long int> ans(n,1);
        for(int i = 0; i < n; i++){
            ans[i] = ( leftArr[i] * rightArr[i] );
        }
        
        return ans;
    }
};
