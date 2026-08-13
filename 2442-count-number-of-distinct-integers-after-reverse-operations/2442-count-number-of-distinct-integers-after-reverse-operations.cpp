class Solution {
public:
    int reverse(int num){
        int k = 0;
        while(num > 0){
            int cur = num % 10;
            k = k * 10 + cur;
            num = num / 10;
        }
        return k;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            int rev = reverse(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};