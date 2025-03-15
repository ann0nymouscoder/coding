class Solution {
public:
    int totalNumbers(vector<int>& digits) 
    {
        unordered_set<int> another;
        int count=0;
        int l=digits.size();
        for(int i=0;i<l;i++)
            {
                if(digits[i]==0)
                {
                    continue;
                }
                for(int j=0; j<l;j++)
                    {
                        if(i==j)
                        {
                            continue;
                        }
                        for(int k=0;k<l;k++)
                            {
                              if(i==k || j==k)
                              {
                                  continue;
                              }
                                if(digits[k]%2==0)
                                {
                                    count=digits[i]*100+digits[j]*10+digits[k];
                                    another.insert(count);
                                }
                            }
                    }
            }
        return another.size();
    }
};©leetcode
