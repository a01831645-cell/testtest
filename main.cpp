class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> valid(bank.begin(), bank.end());

        if (!valid.count(endGene)) return -1;
        
        queue<string> q;
        q.push(startGene);
        unordered_set<string> visited;
        visited.insert(startGene);
        int steps = 0;
        vector<char> genes = {'A','C','G','T'};
        
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                string curr = q.front(); q.pop();
                if (curr == endGene) return steps;
                for (int j = 0; j < 8; j++) {
                    char original = curr[j];
                    
                    for (char g : genes) {
                        curr[j] = g;
                        
                        if (valid.count(curr) && !visited.count(curr)) {
                            visited.insert(curr);
                            q.push(curr);
                        }
                    }
                    
                    curr[j] = original; // restore
                }
            }
            
            steps++;
        }
        
        return -1;
    }
};
