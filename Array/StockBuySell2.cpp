#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int start = prices[0];
        for(int i = 1; i < prices.size(); i++){
            maxPro = max( maxPro, maxPro + prices[i] - start);
            start = prices[i];
        }
        return maxPro;
    }
};