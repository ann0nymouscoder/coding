class Solution {
public:
    
    bool canRemove(string s,string p,vector<int> &removable,int k){
         

         for(int i=0;i<k;i++){
            s[removable[i]]='#';
         } 
         int i=0;
         int j=0;

         while(i<s.size() && j<p.size()){
            if(s[i]==p[j])j++;
            i++;
         }

         return j==p.size();
  
    }

    int maximumRemovals(string s, string p, vector<int>& removable) {
        int low=0;
        int high=removable.size();

        while(low<=high){
            int mid=low+(high-low)/2;

            if(canRemove(s,p,removable,mid)){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        return high;
    }
};
