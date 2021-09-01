/**
 * https://www.spoj.com/problems/LASTDIG/
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll binpow(ll a, ll b, ll m){
    a%=m;
    ll ans = 1;
    while(b){
        if(b&1)
            ans = (a*ans)%m;
        b>>=1;
        a = (a*a)%m;
    }
    return ans;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<binpow(a, b, 10)<<"\n";
    }
    return 0;
}
