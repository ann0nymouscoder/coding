class Solution {
public:
    int countLargestGroup(int n) 
    {
        int count=0;
    unordered_map<int,int> an;
    int p=n;
    for(int i=1;i<=n;i++)
    {
        p=i;
        if(p<=9)
        {
            an[p]++;
        }
        else
        {
            int doub=0;
            while(p>0)
            {
                doub=doub+p%10;
                p=p/10;
            }
            an[doub]++;
        }
    }
    int tot=0;
    int maxi=0;
    for(auto &i : an)
    {
        tot=i.second;
        maxi=max(tot,maxi);
    }
    int count1=0;
    for(auto &k:an)
    {
        if(k.second==maxi)
        {
            count1++;
        }
    }
    return count1;    
    }
};
