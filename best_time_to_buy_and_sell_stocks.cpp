class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxval=0;
        int minval=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<minval)
            {
                minval=prices[i];    
            }
            int currdiff=prices[i]-minval;
            if(currdiff>maxval)
            {
               maxval=currdiff; 
            }
        }
        return maxval;
        
    }
};