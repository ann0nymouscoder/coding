class Solution {
public:
    int smallestNumber(int n) 
    {
        int i=0;
        int tot=0;
        int count=0;
        int p=1;
        while(n!=0)
        {
            n=n/2;
            count++;
        }
        while(p<=count)
        {
            tot=tot+pow(2,i);
            i++;
            p++;
        }
        return tot;
    }
};
