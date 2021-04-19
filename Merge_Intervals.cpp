class Solution {
public:
   static bool compare(vector<int>&a,vector<int>&b)
    {
        if(a[1]==b[1])
        {
            return a[0]<b[0];    
        }
        else
        {
            return a[1]<b[1];
        }
    }
    
    vector<vector<int>>helper(vector<vector<int>>&intervals,int start,int end)
    {
        if(start==end-1)
        {
            vector<vector<int>>myv;
            myv.push_back(intervals[start]);
            return myv;
        }
        vector<vector<int>>ans=helper(intervals,start+1,end);
        vector<vector<int>>finans;
        int fs=intervals[start][0];
        int fe=intervals[start][1];
        int ss=ans[0][0];
        int se=ans[0][1];
        if(ss<=fe)
        {
            vector<int>mq;
            mq.push_back(min(fs,ss));
            mq.push_back(max(se,fe));
            finans.push_back(mq);
            for(int i=1;i<ans.size();i++)
            {
                finans.push_back(ans[i]);
            }
        }
        else
        {
            finans.push_back(intervals[start]);
            for(int i=0;i<ans.size();i++)
            {
                finans.push_back(ans[i]);
            }
        }
       
        return finans;
        
    }
    
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        int n=intervals.size();
         sort(intervals.begin(),intervals.end(),compare);
        vector<vector<int>>myhelp=helper(intervals,0,n);
        return myhelp;
        
    }
};