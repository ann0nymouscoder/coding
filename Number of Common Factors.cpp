class Solution {
public :
    int commonFactors(int a, int b) 
    {
        unordered_map<int,int> first;
        int i=1;
        int count=0;
        while(i<=a)
        {
        if(a%i==0)
        {
            first[i]++;
        }
        i++;
        } 
        i=1;
        while(i<=b)
        {
        if(b%i==0)
        {
            first[i]++;
            if(first[i]>1)
            {
                count++;
            }
        }
        i++;
        }
        return count;
    }
    
};
