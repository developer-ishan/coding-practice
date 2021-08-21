Coin Change Problem Minimum Numbers of coins
Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, what is the minimum number of coins to make the change?
Example:

Input: coins[] = {25, 10, 5}, V = 30
Output: Minimum 2 coins required
We can use one coin of 25 cents and one of 5 cents

https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/

dp[n+1][sum+1]

| INT_MAX | INT_MAX | INT_MAX | INT_MAX |
| ------- | ------- | ------- | ------- |
| 0       |         |         |         |
| 0       |         |         |         |
| 0       |         |         |         |

```cpp
for(int i=1; i<=sum+1; i++)
    if(i%arr[0]==0)
        dp[1][i] = i/arr[0];

for i = 1 to n
    for j = 1 to sum
        if(coin[i-1]<=j)
            dp[i][j] = min(dp[i][j-coin[i-1]]+1, dp[i-1][j])
        else
            dp[i][j] = dp[i-1][j]
```
```cpp
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int *coins;
	long long int dp[1001][1001];
	long long int ways(long long int val, long long int n){
        if(val==0)
            return 0;
        if(n<=0 || val<0)
            return INT_MAX;
        if(dp[val][n]!=-1)
            return dp[val][n];
        return dp[val][n] = min(1+ways(val-coins[n-1], n), ways(val, n-1));
    }
    
	int minCoins(int ip_coins[], int M, int V) 
	{
	    memset(dp, -1, sizeof(dp));
	    coins = ip_coins;
	    long long int x = ways(V, M);
	    if(x>=INT_MAX)
	        return -1;
	   return x;
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends
```