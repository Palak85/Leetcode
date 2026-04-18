class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(count == 0){
                max = nums[i];
            }
            if(nums[i] == max){
                count++;
            }
            else{
                count--;
            }
        }
        return max;
    }
};