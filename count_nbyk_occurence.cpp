  public:
    int countOccurence(int arr[], int n, int k) {
        int candidate=arr[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==candidate)
            {
                count++;
            }
            else
            if(arr[i]!=candidate)
            {
                if(count==0)
                {
                    candidate=arr[i];
                    count=1;
                }
                else
                {
                    count--;
                }
            }
        }
        int check=0;
        unordered_map<int,int>mymap;
        for(int i=0;i<n;i++)
        {
           mymap[arr[i]]++;
            
        }
        for(auto it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second>n/k)
            {
                check++;
            }
        }
       
        return check;
        
    }
};