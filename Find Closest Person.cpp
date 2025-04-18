class Solution {
public:
    int findClosest(int x, int y, int z) 
    {
    int which=0;
    if(abs(x-z)<abs(y-z))
    {
        which=1;
    }
    else if(abs(x-z)>abs(y-z))
    {
        which=2;
    }
    else
    {
        which=0;
    }
    return which;    
    }
};
