 //paste inside solution class  
   


 void merge(long long arr[],int s,int m,int e,long long & inv)
{
    int n1=m-s+1;
    int n2=e-m;
    long long*arr1=new long long[n1];
    long long*arr2=new long long[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[s+i];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[m+1+j];
    }
    
    int i=0;
    int j=0;
    int mi=s;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[mi]=arr1[i];
            i++;
        }
        else
        {
            
            arr[mi]=arr2[j];
            inv+=n1-i;
            j++;
        }
        mi++;
    }
    while(i<n1)
    {
        arr[mi]=arr1[i];
        i++;
        mi++;
    }
    while(j<n2)
    {
        arr[mi]=arr2[j];
        j++;
        mi++;
    }
    return;
    
}
void mergesort(long long arr[],int s,int e,long long &inv)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        mergesort(arr,s,mid,inv);
        mergesort(arr,mid+1,e,inv);
        merge(arr,s,mid,e,inv);
    }
    return; 
}

long long int inversionCount(long long arr[], long long N)
{
    long long inversions=0;
    mergesort(arr,0,N-1,inversions);
    return inversions;
}
