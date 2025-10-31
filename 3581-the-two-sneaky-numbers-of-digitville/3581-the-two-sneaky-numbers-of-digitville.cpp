class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> result;

        for (int num : nums) {
            if (seen.count(num))
                result.push_back(num);  // found a duplicate
            else
                seen.insert(num);
        }
        return result;
    }
};