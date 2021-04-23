int CountPS(char S[], int N)
{
   bool **dp=new bool*[N];
   for(int i=0;i<N;i++)
   {
       dp[i]=new bool[N];
       for(int j=0;j<N;j++)
       {
           dp[i][j]=false;
       }
   }
   int count=0;
   for(int g=0;g<N;g++)
   {
       for(int i=0,j=g;j<N;i++,j++)
       {
           if(g==0)
           {
               dp[i][j]=true;
           }
           else
           if(g==1)
           {
               if(S[i]==S[j])
               {
                   dp[i][j]=true;
               }else
               {
                   dp[i][j]=false;
               }
           }
           else
           {
               if((S[i]==S[j])&&(dp[i+1][j-1]==true))
               {
                   dp[i][j]=true;
               }
               else
               {
                   dp[i][j]=false;
               }
           }
           
           if(dp[i][j]==true)
           {
               count++;
           }
           
       }
   }
   return count-N;
}