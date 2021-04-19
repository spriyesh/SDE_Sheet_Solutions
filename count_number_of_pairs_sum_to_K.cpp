class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>mymap;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int diff=k-arr[i];
            if(mymap.count(diff)>0)
            {
                count+=mymap[diff];
                mymap[arr[i]]++;
            }
            else
            {
                mymap[arr[i]]++;
            }
        }
        return count;
    }
};