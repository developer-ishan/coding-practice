/**
 * https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1970
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
int leading(int n, int k){
    double p = k*log10(n);
    double d = fmod(p,1);
    int leading = (int)(pow(10,d)*100);
    return leading;
}
int trailing(int n, int k){
    return binpow(n, k, 1000);
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        printf("%d...%03d\n",leading(n, k),trailing(n, k));
    }
    return 0;
}
