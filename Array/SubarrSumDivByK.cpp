#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixSum = 0;
        int count = 0;

        unordered_map <int, int> mp;
        mp[0] = 1;

        for (int i : nums) {
            prefixSum += i;
            int mod = prefixSum % k;
            
            if (mod < 0)
                mod += k;

            if (mp.find(mod) != mp.end()){
                count += mp[mod];
            }
            mp[mod]++;   
        }
        return count;
    }
};