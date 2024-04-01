class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim(); 
        int c=s.length();
        int count=0;
        for(int j=c-1;j>=0;j--)
        {
            if(s.charAt(j)==' ')
            {
                return count;
            }
            count++;
        }
        return count;
    }
}
