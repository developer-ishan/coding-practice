Printing Longest Common Subsequence
Given two sequences, print the longest subsequence present in both of them.
Example:
LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3.

https://www.geeksforgeeks.org/printing-longest-common-subsequence

after table is constructed

```cpp
int i=n, j=m;
string ans;

while(i>0 && j>0){
    if(a[i-1]==b[j-1]){
        s.push_back(a[i-1]);
        i--;
        j--;
    }else if(dp[i-1][j] > dp[i][j-1]){
        i--;
    } else{
        j--;
    }
}

return reverse(ans);
```
