class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = n / 3;
        vector<int> ans;
        for(int i=0; i<n; i++){
            int count = 0;

            bool alreadyAdded = false;
            for(int x : ans){
                if(x == nums[i]){
                    alreadyAdded = true;
                    break;
                }
            }
            if(alreadyAdded) continue;
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }

            if(count > maj){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};