class Solution {
public:
     int hammingWeight(int n) {
        unsigned int num = n;
        int count = 0;

        while (num) {
            num &= (num - 1);
            count++;
        }

        return count;
    }
};