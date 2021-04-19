string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int>mymap;
    for(int i=0;i<n;i++)
    
    {
        mymap[a1[i]]++;
    }
    for(int j=0;j<m;j++)
    {
        if(mymap.count(a2[j])==0)
        {
            return "No";
        }
    }
    return "Yes";
    
}