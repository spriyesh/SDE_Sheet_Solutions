#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
#include<bits/stdc++.h>
int findLongestConseqSubseq(int arr[], int N)
{
  unordered_map<int,int>mymap;
  for(int i=0;i<N;i++)
  {
      mymap[arr[i]]++;
  }
  int countmax=0;
  for(int i=0;i<N;i++)
  {
      int counttemp=0;
      if(mymap.count(arr[i]-1)>0)
      {
          continue;
      }
      else
      {
          int k=arr[i]++;
          while(mymap.count(k)!=0)
          {
              counttemp++;
              k++;
          }
          countmax=max(countmax,counttemp);
      }
  }
  return countmax;
}