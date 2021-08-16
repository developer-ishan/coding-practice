# Minimum Subset Sum Difference

Sum of subset differences
Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.

Example:
Input: arr[] = {1, 6, 11, 5}
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12
Subset2 = {11}, sum of Subset2 = 11

https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/

https://www.interviewbit.com/problems/minimum-difference-subsets/

```cpp
int Solution::solve(vector<int> &arr) {
    int sum=0;
    for(int x:arr)
        sum+=x;

    bool dp[arr.size()+1][sum+1];

    for(int i=0; i<=arr.size(); i++)
        dp[i][0]=true;

    for(int i=1; i<=sum; i++)
        dp[0][i]=false;

    for(int i=1; i<=arr.size(); i++)
    for(int j=1; j<=sum; j++){
        if(arr[i-1]<=j)
            dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
        else
            dp[i][j] = dp[i-1][j];
    }

    int min_sum=INT_MAX;

    for(int i=0; i<=sum; i++){
        if(dp[arr.size()][i]){
            min_sum = min(min_sum, abs(sum-i-i));
        }
    }

    return min_sum;
}

```
