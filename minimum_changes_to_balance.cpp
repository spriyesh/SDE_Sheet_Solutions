int countRev (string s)
{
    stack<char>mstk;
    int i=0;
    if(s.length()%2!=0)
    {
        return -1;
    }
    else
    {
        
        while(s[i]!='\0')
        {
            if(s[i]=='{')
            {
                mstk.push(s[i]);
            }
            else
            if(s[i]=='}')
            {
                if(mstk.empty()||mstk.top()!='{')
                {
                    mstk.push(s[i]);
                }
                else
                {
                    mstk.pop();
                }
            }
            i++;
        }
    }
    int count=0;
    while(!mstk.empty())
    {
        char c1=mstk.top();
        mstk.pop();
        char c2=mstk.top();
        mstk.pop();
        if(c1==c2)
        {
            count+=1;
        }
        else
        {
            count+=2;
        }
    }
    return count;
    
}