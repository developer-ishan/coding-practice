# Equal Sum Partition Problem

Equal Sum Partition Problem
Partition problem is to determine whether a given set can be partitioned into two subsets such that the sum of elements in both subsets is same.
Examples:

arr[] = {1, 5, 11, 5}
Output: true
The array can be partitioned as {1, 5, 5} and {11}

https://www.geeksforgeeks.org/partition-problem-dp-18/

https://leetcode.com/problems/partition-equal-subset-sum/

```cpp
bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int x: nums)
            sum+=x;
        if(sum%2!=0)
            return false;
        sum/=2;

        int dp[nums.size()+1][sum+1];

        for(int i=0; i<=nums.size(); i++)
            dp[i][0]=true;
        for(int i=1; i<=sum; i++)
            dp[0][i]=false;

        for(int i=1; i<=nums.size(); i++)
        for(int j=1; j<=sum; j++){
            if(nums[i-1]<=j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }

        return dp[nums.size()][sum];

    }
```
