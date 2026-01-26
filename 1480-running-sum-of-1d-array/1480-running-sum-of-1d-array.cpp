class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};