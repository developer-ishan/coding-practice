# Subset Sum Problem

Subset Sum Problem(Dynamic Programming)
Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
Example:

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True //There is a subset (4, 5) with sum 9.

PROBLEM STATEMENT LINK:https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

https://www.interviewbit.com/problems/subset-sum-problem/

```cpp
int dp[102][100002];
int solve_m(int i, int N, vector<int> &arr){
    if(N==0)
        return 1;
    if(i<0)
        return 0;
    if(dp[i][N]!=-1)
        return dp[i][N];
    if(arr[i]>N)
        return dp[i][N] = solve_m(i-1, N, arr);
    return dp[i][N] = solve_m(i-1, N-arr[i], arr) || solve_m(i-1, N, arr);
}

int Solution::solve(vector<int> &A, int B) {
    memset(dp, -1, sizeof(dp));
    return solve_m(A.size()-1, B, A);
}

```

```cpp
int Solution::solve(vector<int> &arr, int B) {
    int dp[arr.size()+2][B+2];
    for(int i=0; i<=arr.size(); i++)
        dp[i][0]=1;
    for(int i=1; i<=B; i++)
        dp[0][i]=0;

    for(int i=1; i<=arr.size(); i++)
    for(int sum=1; sum<=B; sum++){
        if(arr[i-1]<=sum)
            dp[i][sum]=dp[i-1][sum] || dp[i-1][sum-arr[i-1]];
        else
            dp[i][sum]=dp[i-1][sum];
    }
    return dp[arr.size()][B];
}

```
