class Solution {
public:
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
    bool halvesAreAlike(string s) 
    {
    int count1=0;
    int count2=0;
    int p=s.length();
    for(int i=0;i<p;i++)
    {
        if(i<p/2)
        {
            if(isVowel(s[i]))
            {
                count1++;
            }
        }
        else
        {
            if(isVowel(s[i]))
            {
                count2++;
            }
        }
    }
    return count1==count2;    
    }
};
