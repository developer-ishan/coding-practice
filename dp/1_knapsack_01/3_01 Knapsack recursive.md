# 01 Knapsack recursive

input: weight, value arrat, capacity
output: Max vslue possible

```cpp
int knapsack(int wt[], int val[], int W, int n)
{
    //base condition
    // there are no availabe items or we have no space in the bag
    if(n==0 || W==0)
        return 0;


    //choice diagram
    if(wt[n-1] <= W)
        return max(val[n-1] + knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1));

    else if(wt[n-1] > W)
        return knapsack(wt, val, W, n-1);

}
```

base condition -> think of the samllest valid input

fun(ip) -> fun(smaller ip)
