#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
vector<int> coins;
// vector<vector<int>> dp;

// int count_ways(int n, int val){
//     if(val==0)
//         return 1;
//     if(val<0 || n==0)
//         return 0;
//     if(dp[n][val]!=-1)
//         return dp[n][val];

//     if(coins[n-1]<=val){
//         return dp[n][val] = (count_ways(n, val-coins[n-1]) + count_ways(n-1, val))%MOD;
//     } else{
//         return dp[n][val] = count_ways(n-1, val)%MOD;
//     }
// }

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,val;
    cin>>n>>val;
    coins.resize(n);
    vector<int> dp(val+1, 0);
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }
    dp[0] = 1;
    for(int i=0; i<n; i++){
        for(int j=coins[i]; j<=val; j++)
            dp[j] = (dp[j] + dp[j-coins[i]])%MOD;
    }
    cout<<dp[val]<<"\n";
    return 0;
}
