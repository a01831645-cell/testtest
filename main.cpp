/*
 * Project: <your-project-name>
 * Copyright (C) 2026 Marcel Nicklaß
 * This file is part of test.
 * Licensed under the GNU General Public License v3.0 or later.
 * See <https://www.gnu.org/licenses/>.
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
