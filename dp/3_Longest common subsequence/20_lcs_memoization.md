```cpp
int dp[1001][1001];
    //Function to find the length of longest common subsequence in two strings.
    int solve(int x, int y, string s1, string s2)
    {
        if(x==0 || y==0)
            return 0;
        if(dp[x][y]!=-1)
            return dp[x][y];
        if(s1[x-1] == s2[y-1])
            return dp[x][y] = 1+solve(x-1, y-1, s1, s2);
        return dp[x][y] = max(solve(x-1, y, s1, s2), solve(x, y-1, s1, s2));
    }
    int lcs(int x, int y, string s1, string s2)
    {
        memset(dp, -1, sizeof(dp));
        return solve(x,y,s1,s2);
    }
```
