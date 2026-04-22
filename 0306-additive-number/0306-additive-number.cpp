class Solution {
public:
    bool check(string num, long long a, long long b, int start) {
        if(start == num.size()) return true;

        long long sum = a + b;
        string s = to_string(sum);

        if(num.substr(start, s.size()) != s) return false;

        return check(num, b, sum, start + s.size());
    }

    bool isAdditiveNumber(string num) {
        int n = num.size();

        for(int i = 1; i <= n/2; i++) {
            for(int j = 1; max(i, j) <= n - i - j; j++) {

                // skip leading zeros
                if((num[0] == '0' && i > 1) || (num[i] == '0' && j > 1))
                    continue;

                long long a = stoll(num.substr(0, i));
                long long b = stoll(num.substr(i, j));

                if(check(num, a, b, i + j)) return true;
            }
        }

        return false;
    }
};