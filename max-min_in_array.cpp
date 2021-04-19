#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxval=INT_MIN;
    int minval=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxval=max(maxval,arr[i]);
        minval=min(minval,arr[i]);
    }
    cout<<"Max value->"<<maxval<<" "<<"Min value->"<<minval;
    return 0;
    
}