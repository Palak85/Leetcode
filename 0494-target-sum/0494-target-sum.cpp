class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = 0;
        for (int num : nums) totalSum += num;

        if ((target + totalSum) % 2 != 0 || abs(target) > totalSum) {
            return 0;
        }

        int P = (target + totalSum) / 2;

        vector<int> dp(P + 1, 0);
        dp[0] = 1;

        for (int num : nums) {
            for (int j = P; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[P];
    }
};