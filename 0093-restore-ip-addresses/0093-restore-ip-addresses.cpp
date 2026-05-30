class Solution {
public:
    vector<string> ans;

    void backtrack(string &s, int idx, int parts, string curr) {
        if (parts == 4 && idx == s.size()) {
            curr.pop_back(); // remove trailing '.'
            ans.push_back(curr);
            return;
        }

        if (parts == 4 || idx == s.size())
            return;

        for (int len = 1; len <= 3 && idx + len <= s.size(); len++) {
            string segment = s.substr(idx, len);

            // No leading zeros
            if (segment.size() > 1 && segment[0] == '0')
                break;

            int val = stoi(segment);
            if (val > 255)
                break;

            backtrack(s, idx + len, parts + 1,
                      curr + segment + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        backtrack(s, 0, 0, "");
        return ans;
    }
};