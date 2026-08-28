class Solution {
    public boolean vowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }
        return false;
    }
    public String reverseVowels(String s) {
        char ch[] = s.toCharArray();
        int left = 0;
        int right = ch.length - 1;
        while(left < right){
            if(!vowel(ch[left])){
                left++;
            }
            else if(!vowel(ch[right])){
                right--;
            }
            else{
                char temp = ch[left];
                ch[left] = ch[right];
                ch[right] = temp;
                left++;
                right--;
            }
        }
        return new String(ch);
    }
}