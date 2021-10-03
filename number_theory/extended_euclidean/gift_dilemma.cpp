#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll count_ways(vector<ll> coin, int val){
    ll n = coin.size();
    ll dp[val+1][n+1];

    for(int i=0; i<=n; i++){
        dp[0][i] = 1;
    }
    for(int i=1; i<=val; i++){
        dp[i][0] = 0;
    }
    for(int i=1; i<=val; i++){
        for(int j=1; j<=n; j++){
            dp[i][j] = dp[i][j-1];
            if(i>=coin[j-1])
                dp[i][j]+=dp[i-coin[j-1]][j];
        }
    }
    // for(int i=0; i<=val; i++){
    //     for(int j=0; j<=n; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return dp[val][n];
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int c = 1; c<=t; c++){
        ll p;
        vector<ll> a(3);
        cin>>a[0]>>a[1]>>a[2]>>p;
        cout<<"Case "<<c<<": "<<count_ways(a, p)<<"\n";
    }
    return 0;
}
