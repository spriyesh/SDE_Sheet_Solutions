class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int*leftarray=new int[n];
        int*rightarray=new int[n];
        int lmax=arr[0];
        leftarray[0]=lmax;
        int rmax=arr[n-1];
        rightarray[n-1]=rmax;
        for(int i=1;i<n;i++)
        {
            lmax=max(lmax,arr[i]);
            leftarray[i]=lmax;
        }
        for(int i=n-2;i>=0;i--)
        {
            rmax=max(rmax,arr[i]);
            rightarray[i]=rmax;
        }
        int tr=0;
        for(int i=1;i<n-1;i++)
        {
            int t=min(leftarray[i],rightarray[i])-arr[i];
            tr+=t;
        }
        return tr;
    }
};
