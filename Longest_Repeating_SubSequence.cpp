	int LongestRepeatingSubsequence(string str){
		    int n=str.length();
		    int**dp=new int*[n+1];
		    for(int i=0;i<=n;i++)
		    {
		        dp[i]=new int [n+1];
		        for(int j=0;j<=n;j++)
		        {
		            dp[i][j]=0;
		        }
		    }
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(str[i-1]==str[j-1]&&i!=j)
		            {
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else
		            {
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		            }
		        }
		    }
		    int val=INT_MIN;
		   for(int i=0;i<=n;i++)
		   {
		       for(int j=0;j<=n;j++)
		       {
		           val=max(val,dp[i][j]);
		       }
		   }
		   return val;
		}