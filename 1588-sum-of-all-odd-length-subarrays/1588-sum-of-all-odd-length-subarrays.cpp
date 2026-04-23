class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int left = i + 1;
            int right = n - i;

            int total = left * right;
            int oddCount = (total + 1) / 2;

            sum += arr[i] * oddCount;
        }

        return sum;
    }
};