Unbounded Knapsack (Repetition of items allowed)
Given a knapsack weight W and a set of n items with certain value vali and weight wti, we need to calculate minimum amount that could make up this quantity exactly. This is different from classical Knapsack problem, here we are allowed to use unlimited number of instances of an item.
Examples:

Input : W = 100
val[] = {1, 30}
wt[] = {1, 50}
Output : 100
There are many ways to fill knapsack.

1. 2 instances of 50 unit weight item.
2. 100 instances of 1 unit weight item.
3. 1 instance of 50 unit weight item and 50
   instances of 1 unit weight items.
   We get maximum value with option 2.

https://www.geeksforgeeks.org/unbounded-knapsack-repetition-items-allowed/

Related problems

- Rod Cutting
- Coin Change 1(max no of ways)
- Coin Change 2(min no of coins)
- Maximum Ribbon Cut

```
t[i][j] = max(val[i-1] + t[i][j-wt[i+1]], t[i-1][j])
else
t[i][j] = t[i-1][j]
```
