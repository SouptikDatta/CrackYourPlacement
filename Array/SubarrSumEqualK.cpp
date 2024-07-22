#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefix;
        int sum = 0;
        int count = 0;
        prefix[0] = 1; // we always have 1 sum of zero, which is sum of none
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];            
            int find = sum - k;
            if(prefix.count(find) > 0 ){
                count += prefix[find];
            }
            // construct prefix array.
            prefix[sum]++;
        }        
        return count;
    }
};