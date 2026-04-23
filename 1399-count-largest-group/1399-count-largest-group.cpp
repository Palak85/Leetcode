class Solution {
public:
    int digitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        unordered_map<int, int> freq;

        for (int i = 1; i <= n; i++) {
            freq[digitSum(i)]++;
        }

        int maxSize = 0;
        for (auto &p : freq) {
            maxSize = max(maxSize, p.second);
        }

        int count = 0;
        for (auto &p : freq) {
            if (p.second == maxSize) {
                count++;
            }
        }

        return count;
    }
};