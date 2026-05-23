#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int jobScheduling(vector<vector<int>>& jobs) {

        // Sort according to profit descending
        sort(jobs.begin(), jobs.end(),
            [](vector<int>& a, vector<int>& b) {
                return a[2] > b[2];
            });

        // Find maximum deadline
        int maxDeadline = 0;

        for(int i = 0; i < jobs.size(); i++) {
            maxDeadline = max(maxDeadline, jobs[i][1]);
        }

        // Slots array
        vector<int> slot(maxDeadline + 1, -1);

        int totalProfit = 0;

        // Traverse jobs
        for(int i = 0; i < jobs.size(); i++) {

            int deadline = jobs[i][1];
            int profit = jobs[i][2];

            // Find free slot from deadline backwards
            for(int j = deadline; j >= 1; j--) {

                // Free slot
                if(slot[j] == -1) {

                    slot[j] = i;

                    totalProfit += profit;

                    break;
                }
            }
        }

        return totalProfit;
    }
};
