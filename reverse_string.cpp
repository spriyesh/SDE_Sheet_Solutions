class Solution {
public:
    void reverseString(vector<char>& s) {
        string s1="";
        
       for(int i=0;i<s.size();i++)
       {
           s1+=s[i];
       }
        
        for(int i=s1.length()-1;i>=0;i--)
        {
            s[(s1.length()-1-i)]=s1[i];
        }
        
    }
};