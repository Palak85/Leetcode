class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> v;

        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i}); // {value, index}
        }

        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if (v[i].first == v[i-1].first) {
                if (abs(v[i].second - v[i-1].second) <= k) {
                    return true;
                }
            }
        }

        return false;
    }
};