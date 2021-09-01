#include<bits/stdc++.h>
using namespace std;

int count_steps(int n){
    if(n==0)
        return 0;
    if(n<=9)
        return 1;
    int count = INT_MAX;
    int temp = n;
    while(temp!=0){
        if(temp%10)
            count = min(count, 1+count_steps(n-temp%10));
        temp/=10;
    }
    return count;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> dp(1000001, 1);

    for(int i=10; i<=n; i++){
        dp[i] = INT_MAX;
        int t = i;
        while(t!=0){
            if(t%10)
                dp[i] = min(dp[i], 1 + dp[i-t%10]);
            t/=10;
        }
    }
    cout<<dp[n]<<"\n";
    return 0;
}
