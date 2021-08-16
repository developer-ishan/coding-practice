# 01 Knapsack Top Down DP

https://www.interviewbit.com/problems/0-1-knapsack/

```cpp
int Solution::solve(vector<int> &val, vector<int> &wt, int W) {
    int dp[val.size()+1][W+1];
    for(int i=0; i<=val.size(); i++)
        dp[i][0]=0; //if there is no capacity
    for(int i=0; i<=W; i++)
        dp[0][i]=0; //if there are no items

    for(int i=1; i<=val.size(); i++)
    for(int j=1; j<=W; j++){
        if(wt[i-1]<=j)
            dp[i][j]=max(dp[i-1][j], val[i-1] + dp[i-1][j-wt[i-1]]);
        else
            dp[i][j]=dp[i-1][j];
    }
    return dp[val.size()][W];
}
```
