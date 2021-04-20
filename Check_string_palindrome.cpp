class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    stack<char>mstk;
	    for(int i=0;i<S.length();i++)
	    {
            mstk.push(S[i]);
	    }
	    string s2="";
	    while(!mstk.empty())
	    {
	        s2+=mstk.top();
	        mstk.pop();
	    }
	    if(s2==S)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}

};