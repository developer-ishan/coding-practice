#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
vector<ll> dp;
ll count_ways(int n){
    if(n<0)
        return 0;
    else if(n==0)
        return dp[n]=1;
    if(dp[n]!=-1)
        return dp[n];
    ll count = 0;
    for(int i=1; i<=6; i++){
        count+=count_ways(n-i);
    }
    return dp[n] = count;
}
ll count_ways_tab(int n){
    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(i-j>=0){
                dp[i] = (dp[i] + dp[i-j])%MOD;
            }else{
                break;
            }
        }
    }
    return dp[n];
}
void solve(int n){
    dp = vector<ll>(n+1, -1);
    cout<<count_ways_tab(n)<<"\n";
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    solve(n);
    return 0;
}
