class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        int third = INT_MIN; // represents nums[k]

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < third) {
                return true;
            }

            while (!st.empty() && st.top() < nums[i]) {
                third = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};