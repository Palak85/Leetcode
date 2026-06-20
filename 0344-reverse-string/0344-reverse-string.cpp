class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int j = 0;
        for(int i=n-1; i>j; i--){
            
            swap(s[i],s[j]);
            j++;
        }
    }
};