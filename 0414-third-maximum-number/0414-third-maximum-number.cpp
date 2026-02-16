class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;

        for(int num : nums) {

            // skip duplicates
            if(num == first || num == second || num == third)
                continue;

            if(num > first) {
                third = second;
                second = first;
                first = num;
            }
            else if(num > second) {
                third = second;
                second = num;
            }
            else if(num > third) {
                third = num;
            }
        }

        // If third doesn't exist → return first
        return (third == LONG_MIN) ? first : third;
    }
};
