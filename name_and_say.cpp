class Solution {
public:
    
    string helper(int n)
    {
        if(n==1)
        {
           return "1";
        }
        if(n==2)
        {
            return "11";
        }
        string s=helper(n-1);
        string res="";
        int count=1;
        int j=0;
        for(j=1;j<s.length();j++)
        {
            if(s[j-1]!=s[j])
            {
                res+=to_string(count)+s[j-1];
                count=1;
            }
            else
            {
                count++;
            }
            
        }
        res+=to_string(count)+s[j-1];
        
        
        return res;
    }
    
    
    
    string countAndSay(int n) {
        string help=helper(n);
        return help;
        
    }
};