int minSwap(int *arr, int n, int k) {
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        return 0;
    }
    int i=0;int j=0;
    int valgreater=0;
    while(j<cnt)
    {
        if(arr[j]>k)
        {
            valgreater++;
        }
        j++;
    }
    int temp=valgreater;
    while(j<n)
    {
        
        if(arr[j]>k)
        {
            temp++;
        }
        if(arr[i]>k)
        {
            temp--;
        }
        i++;
        j++;
        
        valgreater=min(valgreater,temp);
        
    }
    return valgreater;
}