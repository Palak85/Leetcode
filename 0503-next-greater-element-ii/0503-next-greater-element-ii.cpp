class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i=0; i<n; i++){
            int larg = -1;
            int k = (i + 1) % n;
            while(k != i){
                if(nums[k] > nums[i]){
                    larg = nums[k];
                    break;
                }
                k = (k + 1) % n;
            }
            result.push_back(larg);
        }
        return result;
    }
};