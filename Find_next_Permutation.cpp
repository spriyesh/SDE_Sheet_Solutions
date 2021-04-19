class Solution {
public:
    void swap(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
        return;
    }
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
        {
            return;
        }
        int i;
        
        for(i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i]||i==0)
            {
                break;
            }
        }
        int j;
        for(j=n-1;j>=0;j--)
        {
            if(nums[j]>nums[i]||j==0)
            {
                break;
            }
        }
        if(i!=j)
        {
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
        }
        else
        {
            reverse(nums.begin(),nums.end());
        }
        return ;
        
        
    }
};