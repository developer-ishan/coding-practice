Coin Change Problem Maximum Number of ways
Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change? The order of coins doesn’t matter.
Example:
for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4.

https://www.geeksforgeeks.org/coin-change-dp-7/

```cpp
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:

    int *S;
    long long int dp[1001][1001];
    long long int ways(int val, int n){
        if(val==0)
            return 1;
        if(n<=0)
            return 0;
        if(dp[val][n]!=-1)
            return dp[val][n];
        if(S[n-1]<=val)
            return dp[val][n] = ways(val-S[n-1], n) + ways(val, n-1);
        else
            return dp[val][n] = ways(val, n-1);
    }
    long long int count( int ip_S[], int ip_m, int n )
    {
        memset(dp, -1, sizeof(dp));
        S = ip_S;
        return ways(n, ip_m);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}


    return 0;
}  // } Driver Code Ends
```
