Minimum number of deletions to make a string palindrome
Given a string of size ānā. The task is to remove or delete minimum number of characters from the string so that the resultant string is palindrome.
Examples :

Input : aebcbda
Output : 2
Remove characters 'e' and 'd'
Resultant string will be 'abcba'
which is a palindromic string

```cpp
int lcs(int x, int y, string s1, string s2)
    {
        int dp[x+1][y+1];
        for(int i=0; i<=x; i++)
            dp[i][0] = 0;
        for(int i=0; i<=y; i++)
            dp[0][i] = 0;

        for(int i=1; i<=x; i++){
            for(int j=1; j<=y; j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                } else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[x][y];
    }
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string rev = string(s.rbegin(), s.rend());
        return lcs(n,n,s,rev);
    }
    int minimumNumberOfDeletions(string S) {
        int n = S.size();
        return n-longestPalindromeSubseq(S);
    }
```
