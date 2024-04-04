class Solution {
    public int maxDepth(String s) 
    {
        int p=s.length();
        int count=0;
        int j=0;
        int[] arr=new int[p];
     for(int i=0;i<p;i++) 
     {
        if(s.charAt(i)=='(')
        {
            count++;
            arr[j]=count;
            j++;
        }
        else if(s.charAt(i)==')')
        {
            count--;
        }
     }  
     return Arrays.stream(arr).max().getAsInt(); 
    }
}