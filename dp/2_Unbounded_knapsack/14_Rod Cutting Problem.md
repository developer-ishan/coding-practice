Rod Cutting Problem
Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces.
Example:
if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6)

length | 1 2 3 4 5 6 7 8
price | 1 5 8 9 10 17 17 20

https://practice.geeksforgeeks.org/problems/rod-cutting0840/

```cpp
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int *price;
    int dp[1001][1001];
    int solve(int length, int n){
        if(n<=0 || length<=0){
            return 0;
        }
        if(dp[length][n]!=-1)
            return dp[length][n];
        if(length<n){
            return dp[length][n] = solve(length, n-1);
        } else{
            return dp[length][n] = max(solve(length, n-1), price[n-1] + solve(length-n, n));
        }
    }
    int cutRod(int p[], int n) {
        price = p;
        memset(dp, -1, sizeof(dp));
        return solve(n, n);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
```
