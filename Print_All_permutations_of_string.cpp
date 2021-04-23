class Solution
{
	public:
	
	vector<string> helper(string s)
	{
	    if(s.length()==0)
	    {
	        vector<string>v;
	        v.push_back("");
	        return v;
	    }
	    vector<string>fin;
	    for(int i=0;i<s.length();i++)
	    {
	        char ch=s[i];
	        string st1=s.substr(0,i);
	        string st2=s.substr(i+1,s.length()-i-1);
	        string tot=st1+st2;
	        vector<string>ans=helper(tot);
	        for(auto i=ans.begin();i!=ans.end();i++)
	        {
	          string saans=*i;
	          fin.push_back(ch+saans);
	        }
	    }
	    
	    return fin;
	}
	
	
		vector<string>find_permutation(string S)
		{
		    sort(S.begin(),S.end());
		    vector<string>myv=helper(S);
		    
		    return myv;
		}
};
