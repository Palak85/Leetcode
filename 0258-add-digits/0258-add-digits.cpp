class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        if(num <= 9){
            return num;
        }
        while(num >= 10){
            sum = 0;
            while(num > 0){
                int rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            num = sum;
        }
        return sum;
    }
};