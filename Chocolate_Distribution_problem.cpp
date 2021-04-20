class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long mindiff=a[m-1]-a[0];;
        for(int i=1;i+m-1<n;i++)
        {
            long long  currdiff=a[m+i-1]-a[i];
            mindiff=min(mindiff,currdiff);
        }
        return mindiff;
    }   
};