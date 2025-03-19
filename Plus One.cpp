class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                v[i]++;
            if(v[i] == 10){
                v[i] = 0;
                if(i != 0){
                    v[i-1]++;
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};
// or
class Solution {
public:
    vector<int> plusOne(vector<int>& v) 
    {
    int inc=0; 
    for(int i=v.size()-1;i>=0;i--)
    {
        if(i==v.size()-1)
        {
            v[i]++;
        }
        if(v[i]==10)
        {
            v[i]=0;
            inc=1;
        }
        else
        {
            v[i]=v[i]+inc;
            if(v[i]==10)
            {
            v[i]=0;
            inc=1;
            }
            else
            {
                inc=0;
            }
        }
    }
    if (inc) v.insert(v.begin(), 1);
    return v;   
    }
};
