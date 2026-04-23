class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()) return 0;

        int curr = 1;
        int maxLen = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                curr++;
            } else {
                curr = 1;
            }
            maxLen = max(maxLen, curr);
        }

        return maxLen;
    }
};