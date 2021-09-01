#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 10000007

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

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        ll n, k;
        cin>>n>>k;
        if(n==0 && k==0)
            return 0;
        ll ans = 2*bin_exp(n-1, k, MOD)%MOD + 2*bin_exp(n-1, n-1, MOD)%MOD + bin_exp(n, k, MOD) + bin_exp(n, n, MOD);
        cout<<ans%MOD<<"\n";
    }
    return 0;
}
