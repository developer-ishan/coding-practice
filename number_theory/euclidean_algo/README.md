# Eucleadian Algo

```cpp
ll gcd (ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
```
O(log(min(a,b)))