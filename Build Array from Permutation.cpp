class Solution {
public:
    vector<int> buildArray(vector<int>& A) {
       int n=A.size();
       vector<int> tot(n,-1);

        for (int i=0;i<n;i++)
           {
            tot[i]=A[A[i]];
           }
         return tot;
    
        
    }
};
