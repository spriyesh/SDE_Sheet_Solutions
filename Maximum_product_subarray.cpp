class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long maxp=1;
	    long long minp=1;
	    long long prod=1;
	    for(int i=0;i<n;i++)
	    {
	        long long x=arr[i];
	        if(x<0)
	        {
	            long long temp=maxp;
	             maxp=minp;
	             minp=temp;
	        }
	        maxp=max(x,maxp*x);
	        minp=min(x,minp*x);
	        prod=max(maxp,prod);
	    }
	    return prod;
	}
};