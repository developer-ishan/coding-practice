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
