class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0;

        String str = s.trim();
        int i = str.length() - 1;


        while (i >= 0 && ((str.charAt(i) >= 'A' && str.charAt(i) <= 'Z') || (str.charAt(i) >= 'a' && str.charAt(i) <= 'z'))) {
            count++;
            i--;
        }

        return count;
    }
}