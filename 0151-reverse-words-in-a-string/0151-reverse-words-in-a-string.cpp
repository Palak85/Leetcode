class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ') i++; // skip spaces
            
            if (i >= n) break;
            
            int j = i;
            while (j < n && s[j] != ' ') j++;
            
            words.push_back(s.substr(i, j - i));
            i = j;
        }
        
        reverse(words.begin(), words.end());
        
        string ans;
        for (int k = 0; k < words.size(); k++) {
            if (k > 0) ans += " ";
            ans += words[k];
        }
        
        return ans;
    }
};