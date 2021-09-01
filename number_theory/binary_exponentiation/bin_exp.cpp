#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll binpow_rec(int a, int b){
    if(b==0)
        return 1;
    ll x = binpow_rec(a, b/2);
    if(b%2)
        return a*x*x;
    return x*x;
}
ll binpow(int a, int b){
    ll ans = 1;
    while(b){
        if(b&1)
            ans*=a;
        b>>=1;
        a*=a;
    }
    return ans;
}
ll binpow(ll a, ll b, ll m){
    a%=m;
    ll ans = 1;
    while(b){
        if(b&1)
            ans = (ans * a) % m;
        a = (a*a)%m;
        b>>=1;
    }
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<binpow(3, 4)<<"\n";    
    return 0;
}
