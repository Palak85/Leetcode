class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long long reverse = 0;
        while(x > 0){
            int digit = x % 10;
            reverse  = reverse * 10 + digit ;
            x = x/10;
        }
        if(a == reverse){
            return true;
        }
        return false;
    }
};