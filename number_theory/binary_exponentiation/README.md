# Binary Exponentiation

```cpp
ll bin_exp(ll a, ll b, ll m){
    a%=m;
    if(a==0 || a==1)
        return a;
    ll ans = 1;
    while(b){
        if(b&1)
            ans = (ans*a)%m;
        b = b>>1;
        a = (a*a)%m;
    }
    return ans;
}
```

- If m is a prime number we can speed up a bit this algorithm by calculating x^(n mod(m−1)) instead of x^n. This follows directly from Fermat's little theorem.
