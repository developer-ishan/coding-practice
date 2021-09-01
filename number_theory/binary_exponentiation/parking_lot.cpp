/**
 * https://codeforces.com/problemset/problem/630/I#
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll binpow(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1)
            ans = (ans * a);
        a = (a*a);
        b>>=1;
    }
    return ans;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll ans = 0;
    ans = 4*3*2*binpow(4, n-3);
    if(n>3)
        ans+=(n-3)*4*3*3*binpow(4, n-4);
    cout<<ans<<"\n";
    return 0;
}
