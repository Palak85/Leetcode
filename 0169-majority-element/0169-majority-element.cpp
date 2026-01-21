class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0;
        int counter = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (counter == 0) {
                maj = nums[i];
            }

            if (nums[i] == maj)
                counter++;
            else
                counter--;
        }
        return maj;
    }
};
