class Solution {
public:
    bool isvowel(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i=left; i<=right; i++){
            string w = words[i];

            if(isvowel(w.front()) && isvowel(w.back())){
                count++;
            }
        }
        return count;
    }
};