/**
 * File: main.cpp
 * Description: Solution for counting bits problem
 * Author: Marcel Nicklaß
 * Date: 2026-04-20
 */
class Solution {
public:
    vector<int> CountBits(int n) {
        vector<int> ans(n + 1, 0);
        
        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i & (i - 1)] + 1;
        }
        
        return ans;
    }
};
