class Solution {
public:
    void backtrack(int start, int n, int k, vector<int>& temp, vector<vector<int>>& result) {
        if(temp.size() == k) {
            result.push_back(temp);
            return;
        }

        for(int i = start; i <= n; i++) {
            temp.push_back(i);                  // choose
            backtrack(i + 1, n, k, temp, result); // explore
            temp.pop_back();                   // un-choose
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(1, n, k, temp, result);
        return result;
    }
};