class Solution {
public:
    long long coloredCells(int n) 
    {
        long count=0;
        long k=1;;
        while(k<=n)
        {
           count=k*k+(k-1)*(k-1);
           k++;
        }
    return count;
    }
};
