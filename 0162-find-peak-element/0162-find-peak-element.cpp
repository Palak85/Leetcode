class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[mid + 1]) {
                right = mid;      // peak is at mid or to the left
            } else {
                left = mid + 1;   // peak is to the right
            }
        }

        return left;
    }
};