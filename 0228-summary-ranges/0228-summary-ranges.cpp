class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        if (n == 0) return ans;

        int start = nums[0];

        for (int i = 1; i <= n; i++) {
            // check if range breaks
            if (i == n || nums[i] != nums[i - 1] + 1) {
                
                if (start == nums[i - 1]) {
                    // single number
                    ans.push_back(to_string(start));
                } else {
                    // range
                    ans.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }

                // update start
                if (i < n) {
                    start = nums[i];
                }
            }
        }

        return ans;
    }
};