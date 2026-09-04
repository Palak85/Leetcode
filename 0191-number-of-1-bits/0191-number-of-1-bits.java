class Solution {
    public int hammingWeight(int n) {
        String str1 = Integer.toBinaryString(n);
        int count = 0;
        for(int i=0; i<str1.length(); i++){
            if(str1.charAt(i) == '1') count++;
        }
        return count;
    }
}