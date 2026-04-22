/*
 * Copyright (c) 2026 Marcel Nicklaß
 * All rights reserved.
 */

#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    Solution s;
    int n = 10;

    vector<int> result = s.CountBits(n);

    cout << "CountBits(" << n << "): ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
