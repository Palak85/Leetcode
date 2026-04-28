class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                freq[nums[i]]++;
            }
        }

        int maxFreq = 0;
        int result = -1;

        for(auto &p : freq){
            int num = p.first;
            int count = p.second;

            if(count > maxFreq){
                maxFreq = count;
                result = num;
            }
            else if(count == maxFreq && num < result){
                result = num;
            }
        }

        return result;
    }
};