class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) 
    {
       int tot=n*n;
       int count=0;
       int t=0;
       for(int i=0;i<tot;i++)
       {
        if(count+w<=maxWeight)
        {
            count=count+w;
            t++;
        }
        else
        {
            break;
        }
       }
       return t; 
    }
};
ororo/* class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) 
    {
       int count=0;
       count=min(n*n,maxWeight/w);
       return count;
    }
};*/
