class Solution {
public:
    string expand(string s, int left, int right) {
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++) {
            // odd length
            string s1 = expand(s, i, i);
            // even length
            string s2 = expand(s, i, i + 1);

            if(s1.length() > ans.length()) ans = s1;
            if(s2.length() > ans.length()) ans = s2;
        }

        return ans;
    }
};