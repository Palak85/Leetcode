class Solution {
public:
    void solve(vector<int>& nums, int index, set<vector<int>>& st) {
        if(index == nums.size()) {
            st.insert(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(nums, index + 1, st);
            swap(nums[index], nums[i]); // backtrack
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> st;
        solve(nums, 0, st);

        return vector<vector<int>>(st.begin(), st.end());
    }
};