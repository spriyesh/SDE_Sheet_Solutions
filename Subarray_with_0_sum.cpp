class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
     {
        
        int currs=0;
        unordered_map<int,bool>mymap;
        for(int i=0;i<n;i++)
        {
            currs+=arr[i];
            if(mymap.count(currs)>0||currs==0)
            {
                return true;
            }
            else
            {
                mymap[currs]=true;
            }
        }
        return false;
    }
};