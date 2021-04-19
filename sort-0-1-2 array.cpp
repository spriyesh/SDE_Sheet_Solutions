    void swap(int&a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return;
}
void sort012(int arr[], int n)
{
    int i=0;int j=0;int k=n-1;
    while(j<=k)
    {
        if(arr[j]==0)
        {
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else if(arr[j]==2)
        {
            swap(arr[j],arr[k]);
            k--;
        }
        else
        {
            j++;
        }
    }
    return;
}
    
};