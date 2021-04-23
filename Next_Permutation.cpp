class Solution{
public:
void swap(int&a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
    vector<int> nextPermutation(int N, vector<int> arr){
        int n=arr.size();
        int mark1;
        int mark2;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1]||i==0)
            {
                mark1=i;
                break;
            }
            
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>arr[mark1]||i==0)
            {
                mark2=i;
                break;
            }
        }
        if(mark1!=mark2)
        {
            swap(arr[mark1],arr[mark2]);
            reverse(arr.begin()+mark1+1,arr.end());
        }
        else
        {
            reverse(arr.begin(),arr.end());
        }
        
        
        return arr;
    }
};