int doUnion(int a[], int n, int b[], int m)  {
        int count=0;
        unordered_map<int,int>mymap;
        for(int i=0;i<n;i++)
        {
            
            mymap[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mymap[b[i]]++;
        }
        
        return mymap.size();
        
    }
};