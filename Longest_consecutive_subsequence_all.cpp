   int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_map<int,int>mymap;
      
      int totlen=0;
      for(int i=0;i<N;i++)
      {
          mymap[arr[i]]++;
      }
      for(int i=0;i<N;i++)
      {
          int currelem=arr[i];
          int countahead=0;
          int countback=0;
          for(int j=1;j<N;j++)
          {
              if(mymap.count(currelem+j)>0)
              {
                  countahead++;
                  mymap[currelem+j]--;
              }
              else
              {
                  break;
              }
              
          }
          
          for(int j=1;j<N;j++)
          {
              if(mymap.count(currelem-j)>0)
              {
                  countback++;
                  mymap[currelem-j]--;
              }
              else
              {
                  break;
              }
              
          }
         
          totlen=max(totlen,abs(countahead+countback));
      }
      return totlen+1;
    }
};