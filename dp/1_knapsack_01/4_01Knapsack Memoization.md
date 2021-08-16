# 01Knapsack Memoization

matrix[n][m]
arguments -> that change
here n, w changes only

```cpp
int dp[n+1][w+1];
memset(t, -1, sizeof(t));

int knapsack(int wt[], int val[], int W, int n)
{
    if(dp[n][W]!=-1)
        return dp[n][W];

    //base condition
    // there are no availabe items or we have no space in the bag
    if(n==0 || W==0)
        return dp[n][W] = 0;


    //choice diagram
    if(wt[n-1] <= W)
        return dp[n][W] = max(val[n-1] + knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1));

    else if(wt[n-1] > W)
        return dp[n][W] = knapsack(wt, val, W, n-1);

}
```

can Stack overflow
