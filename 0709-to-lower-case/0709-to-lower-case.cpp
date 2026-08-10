class Solution {
public:
    string toLowerCase(string s) {
        for (char &ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }
        }
        return s;
    }
};