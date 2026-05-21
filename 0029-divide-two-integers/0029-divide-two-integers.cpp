class Solution {
public:
    int divide(int dividend, int divisor) {
        
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Convert to long long to avoid overflow
        long long dvd = labs((long long)dividend);
        long long dvs = labs((long long)divisor);

        long long ans = 0;

        // Bit manipulation division
        while (dvd >= dvs) {
            long long temp = dvs;
            long long multiple = 1;

            while ((temp << 1) <= dvd) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            ans += multiple;
        }

        // Apply sign
        if ((dividend < 0) ^ (divisor < 0))
            ans = -ans;

        return (int)ans;
    }
};