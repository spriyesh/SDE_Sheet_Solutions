 public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int,int>mymap;
            set<int>ans;
            vector<int>myv;
            for(int i=0;i<n1;i++)
            {
               if(mymap.count(A[i])==0)
                {
                    mymap[A[i]]++;
                }
            }
            for(int j=0;j<n2;j++)
            {
                if(mymap[B[j]]==1)
                {
                    mymap[B[j]]++;
                }
            }
            for(int i=0;i<n3;i++)
            {
                if(mymap[C[i]]==2)
                {
                    ans.insert(C[i]);
                }
            }
            for(auto it=ans.begin();it!=ans.end();it++)
            {
                myv.push_back(*it);
            }
            return myv;
        }
