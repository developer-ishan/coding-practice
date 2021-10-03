#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n, s;
        cin>>n>>s;
        ll x = n*(n+1)/2  - s;
        if(x<=0 || x>n)
            cout<<"-1\n";
        else
            cout<<x<<"\n";
    }
    return 0;
}
