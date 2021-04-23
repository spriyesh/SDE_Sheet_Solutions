class Solution{
  public:
    // Function to return if the paranthesis are balanced or not
    bool ispar(string x)
    {
        stack<char>mstk;
        for(int i=0;i<x.length();i++)
        {
            if(mstk.size()==0)
            {
                mstk.push(x[i]);
            }
            else
            if((x[i]==')'&&mstk.top()=='(')||(x[i]=='}'&&mstk.top()=='{')||(x[i]==']'&&mstk.top()=='['))
            {
                mstk.pop();
            }
            else
            if(x[i]=='('||x[i]=='{'||x[i]=='[')
            {
                mstk.push(x[i]);
            }
            else
            {
                mstk.push(x[i]);
            }
        }
        if(mstk.empty())
        {
            return true;
        }
        return false;
        
    }

};