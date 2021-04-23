class Solution {
  public:
  
    int helper(string s,string t,int**dp)
    {
        if(s.length()==0)
        {
            return t.length();
        }
        if(t.length()==0)
        {
            return s.length();
        }
        if(dp[s.length()][t.length()]!=-1)
        {
            return dp[s.length()][t.length()];
        }
        int ans=0;
        if(s[0]==t[0])
        {
            ans=helper(s.substr(1),t.substr(1),dp);
        }
        else
        {
            int inc=1+helper(s.substr(1),t,dp);
            int del=1+helper(s.substr(1),t.substr(1),dp);
            int add=1+helper(s,t.substr(1),dp);
            ans=min(inc,min(del,add));
        }
        dp[s.length()][t.length()]=ans;
        return ans;
    }
  
  
  
    int editDistance(string s, string t) {
        int**dp=new int*[s.length()+1];
        for(int i=0;i<=s.length();i++)
        {
            dp[i]=new int[t.length()+1];
            for(int j=0;j<=t.length();j++)
            {
                dp[i][j]=-1;
            }
        }
        int len=s.length();
        int help=helper(s,t,dp);
        return help;
    }
};