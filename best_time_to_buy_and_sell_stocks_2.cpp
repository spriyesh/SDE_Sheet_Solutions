class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=0;
        int profit=0;
        int j;
        while(i<n)
        {
            j=i;
            while(j<n-1)
            {
                if(prices[j+1]>prices[j])
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            profit+=prices[j]-prices[i];
            i=j+1;
        }
        return profit;
    }
};