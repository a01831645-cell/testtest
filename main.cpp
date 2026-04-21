/*
 * Copyright (c) 2026 Marcel Nicklaß
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY.
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
