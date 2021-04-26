vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    //unordered_map<string,string>mymap;
    string*copy=new string[string_list.size()];
    for(int i=0;i<string_list.size();i++)
    {
        copy[i]=(string_list[i]);
    }
    for(int i=0;i<string_list.size();i++)
    {
        string st=copy[i];
        sort(st.begin(),st.end());
        copy[i]=st;
    }
    
   
    map<string,vector<int>>myans;
    for(int i=0;i<string_list.size();i++)
    {
        myans[copy[i]].push_back(i);
    }
    vector<vector<string>>myfinans;
    
    for(auto it=myans.begin();it!=myans.end();it++)
    {
        vector<string>temp;
        vector<int>indcs=it->second;
        for(int i=0;i<indcs.size();i++)
        {
            temp.push_back(string_list[indcs[i]]);
        }
        myfinans.push_back(temp);
    }
    return myfinans;
}