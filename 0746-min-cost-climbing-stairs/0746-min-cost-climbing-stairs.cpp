class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev2 = 0; // dp[i-2]
        int prev1 = 0; // dp[i-1]

        for (int i = 0; i < cost.size(); i++) {
            int curr = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }

        // You can end at last step OR one before last
        return min(prev1, prev2);
    }
};