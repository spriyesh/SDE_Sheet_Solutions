class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>mymap;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        for(auto it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second>1)
            {
                return it->first;
            }
        }
        return -1;
        
    }
};