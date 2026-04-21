class Solution {
public:
   void backtrack(int start, vector<int>& nums, vector<int>& temp, vector<vector<int>>& result) {
        result.push_back(temp);

        for(int i = start; i < nums.size(); i++) {
            // skip duplicates
            if(i > start && nums[i] == nums[i - 1]) continue;

            temp.push_back(nums[i]);
            backtrack(i + 1, nums, temp, result);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> temp;

        backtrack(0, nums, temp, result);
        return result;
    }
};