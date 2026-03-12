class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        vector<int> y;
        for(int j=n; j<m; j++){
            y.push_back(nums[j]);
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(nums[i]);
            ans.push_back(y[i]);
        }
        return ans;
    }
};