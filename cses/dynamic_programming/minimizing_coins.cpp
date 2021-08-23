#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;
    cin>>n>>val;
    vector<int> coins(n);
    for(int i=0; i<n; i++)
        cin>>coins[i];
    
    vector<vector<int>> dp(n+1, vector<int>(val+1, 0));

    for(int i=1; i<=n; i++)
        dp[i][0] = 0;
    for(int i=0; i<=val;  i++)
        dp[0][i] = INT_MAX;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=val; j++){
            if(coins[i-1]<=j){
                int taken = dp[i][j-coins[i-1]];
                    if(taken<INT_MAX)
                        taken++;
                int not_taken = dp[i-1][j];
                dp[i][j] = min(taken, not_taken);
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    if(dp[n][val]==INT_MAX)
        cout<<"-1\n";
    else 
        cout<<dp[n][val]<<"\n";
    return 0;
}
