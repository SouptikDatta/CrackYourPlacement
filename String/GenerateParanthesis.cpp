#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void func( vector<string>& ans, int n, int open, int close, string currStr){
        //base case
        if(currStr.size() == n*2){
            ans.push_back(currStr);
            return;
        }

        if(open < n)
            func(ans, n, open+1, close, currStr+"(");
        
        if(close < open)
            func(ans, n, open, close+1, currStr+")");
    }

    //T.C. = O(2^n) Backtracking
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans, n, 0, 0, "");
        return ans;
    }
};