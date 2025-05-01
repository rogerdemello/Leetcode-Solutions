class Solution {
   
    public boolean isPalindrome(String s) {
        String str = s.toLowerCase();
        StringBuilder sb = new StringBuilder();
        char ar[] = new char[str.length()];
        ar = str.toCharArray();
        for(int i=0; i<ar.length; i++)
        {
            if((ar[i] >= 'a' && ar[i]<='z') || (ar[i] >= '0' && ar[i]<='9'))
            {
                sb.append(ar[i]);
            }
        }
        int m = sb.length();

        if(m==0 || m==1)
        {
            return true;
        }
        boolean status = false;
        for(int i=0; i<m/2; i++)
        {
            if(sb.charAt(i) == sb.charAt(m-i-1))
            {
                status = true;
            }
            else
            {
                return false;
            }
        }
        return status;
    }
}