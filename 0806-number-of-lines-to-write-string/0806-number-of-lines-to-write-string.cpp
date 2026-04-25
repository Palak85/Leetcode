class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int currWidth = 0;

        for (char c : s) {
            int w = widths[c - 'a'];

            if (currWidth + w > 100) {
                lines++;
                currWidth = w;
            } else {
                currWidth += w;
            }
        }

        return {lines, currWidth};
    }
};