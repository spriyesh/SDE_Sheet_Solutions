//only function is here
#include<bits/stdc++.h>
using namespace std;
void swap(int&a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
    return;
}
void mysort(int *arr,int n)
{
    int i=0;int j=n-1;
    while(i<=j)
    {
        if(arr[i]>0&& arr[j]<0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<0 &&arr[j]<0)
        {
            i++;
            
        }
        else
        if(arr[i]<0&&arr[j]>0)
        
        {
            i++;
            j--;
        }
        else
        if(arr[i]>0&&arr[j]>0)
        {
            j--;
        }
        
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    mysort(arr,n);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}