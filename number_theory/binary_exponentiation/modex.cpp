/**
 * https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

    ll t;
    cin>>t;
    while(t--){
        ll a, b, m;
        cin>>a>>b>>m;
        cout<<binpow(a,b,m)<<"\n";
    }
    return 0;
}
