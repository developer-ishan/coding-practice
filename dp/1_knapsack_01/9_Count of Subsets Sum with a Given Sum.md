# Count of Subsets Sum with a Given Sum

Count of subsets sum with a Given sum
Given an array arr[] of length N and an integer X, the task is to find the number of subsets with sum equal to X.
Example:

Input: arr[] = {1, 2, 3, 3}, X = 6
Output: 3
All the possible subsets are {1, 2, 3},
{1, 2, 3} and {3, 3}

https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/

```cpp
int numSubs(vector<int>& nums, int sum) {
    int dp[nums.size()+1][sum+1];

    for(int i=0; i<=nums.size(); i++)
        dp[i][0]=1;
    for(int i=1; i<=sum; i++)
        dp[0][i]=0;

    for(int i=1; i<=nums.size(); i++)
    for(int j=1; j<=sum; j++){
        if(nums[i-1]<=j)
            dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
        else
            dp[i][j] = dp[i-1][j];
    }

    return dp[nums.size()][sum];

    }
```
