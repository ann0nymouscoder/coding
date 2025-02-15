class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
    char count=letters[0];
    if(count>target)
    {
        return count;
    }
    for(int i=1;i<letters.size();i++)
    {
        if(letters[i]>target)
        {
            count=letters[i];
            return count;
        }
    }    
    return count;
    }
};
