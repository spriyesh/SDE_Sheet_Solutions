   int maxSubarraySum(int arr[], int n){
        int maxval=INT_MIN;
        int sumtn=0;
        for(int i=0;i<n;i++)
        {
            sumtn+=arr[i];
            if(arr[i]>sumtn)
            {
                sumtn=arr[i];
            }
            if(sumtn>maxval)
            {
                maxval=sumtn;
            }
        }
        return maxval;
    }
};
