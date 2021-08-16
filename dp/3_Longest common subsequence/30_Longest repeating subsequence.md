Longest Repeating Subsequence
Given a string, print the longest repeating subsequence such that the two subsequence don’t have same string character at same position, i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.
Example:
Input: str = "aab"
Output: "a"
The two subsequence are 'a'(first) and 'a'
(second). Note that 'b' cannot be considered
as part of subsequence as it would be at same
index in both.

https://www.geeksforgeeks.org/longest-repeated-subsequence/

```cpp
int lrs(int x, int y, string s1, string s2)
    {
        int dp[x+1][y+1];
        for(int i=0; i<=x; i++)
            dp[i][0] = 0;
        for(int i=0; i<=y; i++)
            dp[0][i] = 0;

        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(s1[i-1]==s2[j-1] &&
                i!=j){
                    dp[i][j] = 1+dp[i-1][j-1];
                } else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[x][y];
    }
```
