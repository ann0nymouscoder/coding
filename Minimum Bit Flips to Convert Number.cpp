class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int count=0;
        int next=(start>goal)?start:goal;
    while(next>0)
    {
        if((start%2) != (goal%2))
       {
        count++;
       }
            start=start/2; 
            goal=goal/2;
            next=next/2;
           
        }
    
    return count;  
    }
};
