class Solution {
    public int climbStairs(int n) {
        int step1 = 1;
        int step2 = 1;
        for(int i=2; i<=n; i++){
            int a = step1 + step2;
            step2 = step1;
            step1 = a;
        }
        return step1;
    }
}