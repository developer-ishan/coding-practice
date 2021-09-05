#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll computeXOR(ll n)
{
    switch (n & 3) {
 
    case 0:
        return n;
 
    case 1:
        return 1;
 
    case 2:
        return n + 1;
 
    case 3:
        return 0;
    }
}
ll calculate(ll l, ll r){
    return computeXOR(r) ^ computeXOR(l - 1);
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll m, x;
        cin>>m>>x;
        ll cur = calculate(0, m-1);
        if(cur==x){
            cout<<m<<"\n";
        } else {
            ll needed = cur^x;
            if(needed==m)
                m++;
            cout<<m+1<<"\n";
        }
    }
    return 0;
}
