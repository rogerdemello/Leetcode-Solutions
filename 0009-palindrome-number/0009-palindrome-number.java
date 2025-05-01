class Solution {
    public boolean isPalindrome(int x) {
        boolean status = true;
            String n;
            n = Integer.toString(x);
            int s = n.length();
            for(int i=0; i<s/2; i++)
            {
                if(n.charAt(i) != n.charAt(s-i-1))
                {
                    status = false;
                    break;
                }
            }
        
        return  status;
    }
}