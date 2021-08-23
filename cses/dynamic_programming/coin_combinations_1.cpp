#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;
    cin>>n>>val;
    vector<int> coins(n);
    for(int i=0; i<n; i++)
        cin>>coins[i];

    vector<int> dp(val+1, 0);
    dp[0] = 1;

    for(int i=1; i<=val; i++){
        for(int j=0; j<n; j++){
            if(i>=coins[j])
                dp[i] = (dp[i] + dp[i-coins[j]])%MOD;
        }
    }
    return 0;
}
