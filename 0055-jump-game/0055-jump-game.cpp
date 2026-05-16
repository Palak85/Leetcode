class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;

        for (int i = 0; i < nums.size(); i++) {

            // If current index is unreachable
            if (i > maxReach)
                return false;

            // Update farthest reachable index
            maxReach = max(maxReach, i + nums[i]);
        }

        return true;
    }
};