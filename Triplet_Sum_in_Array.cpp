class Solution{
   public:
bool find3Numbers(int A[], int n, int X)
{
    sort(A,A+n);
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>X)
        {
            break;
        }
        else
        {
            int diff=X-A[i];
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
               
                int sum=A[start]+A[end];
                if(sum==diff)
                {
                   //cout<<A[i]<<" "<<A[start]<<" "<<A[end]<<endl;
                    return true;
                }
                else
                if(sum<diff)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
    }
    
    return false;
}
};