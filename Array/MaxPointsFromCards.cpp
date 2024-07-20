#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i = 0;
        int totalSum = 0;
        for(int i = 0; i < cardPoints.size(); i++)    
            totalSum += cardPoints[i];

        if(k == cardPoints.size())  return totalSum;

        int ans = 0;
        int j = 0;
        int currSum = 0;
        while(j < cardPoints.size()) {   
            currSum += cardPoints[j];
            if(j - i + 1 < cardPoints.size() - k) {
                j++;
            }
            else{
                ans = max(ans, totalSum - currSum);
                currSum -= cardPoints[i];
                i++;
                j++;
            }
        }

        return ans;
    } 
};