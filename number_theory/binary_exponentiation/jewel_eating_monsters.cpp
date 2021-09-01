#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll binpow(ll a, ll b, ll m){
    a%=m;
    ll ans = 1;
    while(b){
        if(b&1)
            ans = (ans * a) % m;
        a = (a*a)%m;
        b>>=1;
    }
    return ans;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,a,n,c;
    cin>>x>>a>>n>>c;

    ll ans = (binpow(a,n,c)*x)%c;

    cout<<ans<<"\n";
    return 0;
}
