class Solution
{
  public:
  
    long long int helper(int s[],int target,int start,int end,int**output)
    {
        if(start>end)
        {
            if(target==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(output[start][target]!=-1)
        {
            return output[start][target];
        }
        if(target==0)
        {
            return 1;
        }
        long long int ans=0;
        if(s[start]>target)
        {
            ans=helper(s,target,start+1,end,output);
        }
        else
        {
            ans=helper(s,target,start+1,end,output)+helper(s,target-s[start],start,end,output);
        }
        output[start][target]=ans;
        return ans;
    }
  
    long long int count( int S[], int m, int n )
    {
       int **output=new int*[m+1];
       for(int i=0;i<=m;i++)
       {
           output[i]=new int[n+1];
           for(int j=0;j<=n;j++)
           {
               output[i][j]=-1;
           }
       }
        long long int ans=helper(S,n,0,m-1,output);
        return ans;
    }
};