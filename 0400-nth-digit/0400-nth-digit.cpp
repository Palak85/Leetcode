class Solution {
public:
    int findNthDigit(int n) {
        long long digits = 1;   // digit length
        long long count = 9;    // count of numbers in this block
        long long start = 1;    // starting number of block

        // Step 1: locate block
        while (n > digits * count) {
            n -= digits * count;
            digits++;
            count *= 10;
            start *= 10;
        }

        // Step 2: locate number
        start += (n - 1) / digits;

        string num = to_string(start);

        // Step 3: extract digit
        return num[(n - 1) % digits] - '0';
    }
};