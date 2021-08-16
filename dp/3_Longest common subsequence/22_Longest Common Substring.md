Longest Common Substring(Dynamic Programming)
Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.
Examples:

Input : X = “GeeksforGeeks”, y = “GeeksQuiz”
Output : 5
The longest common substring is “Geeks” and is of length 5.

https://www.geeksforgeeks.org/longest-common-substring-dp-29/

```cpp
int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int dp[n+1][m+1], ans = 0;
        for(int i=0; i<=n; i++)
            dp[i][0]=0;
        for(int i=0; i<=m;i++)
            dp[0][i] = 0;

        for(int i=1; i<=n ;i++){
            for(int j=1; j<=m; j++){
                if(S1[i-1]==S2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                    ans = max(ans, dp[i][j]);
                } else{
                    dp[i][j] = 0;
                }
            }
        }

        return ans;
    }
```

## Printing

https://www.geeksforgeeks.org/print-longest-common-substring/
