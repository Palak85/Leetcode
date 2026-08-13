class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> str;
        int count = 0;
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            string rev = s;
            reverse(rev.begin(), rev.end());
            if(str.find(rev) != str.end()){
                count++;
            }
            else{
                str.insert(s);
            }
        }
        return count;
    }
};