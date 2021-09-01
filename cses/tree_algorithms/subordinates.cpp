#include<bits/stdc++.h>
using namespace std;

vector<int> g[200001];
int n;
vector<int> dp(200001, -1);
int get_count(int node){
    if(dp[node]!=-1)
        return dp[node];
    int count = g[node].size();
    for(int child: g[node]){
        count += get_count(child);
    }
    return dp[node] = count;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i=2; i<=n; i++){
        int boss;
        cin>>boss;
        g[boss].push_back(i);
    }
    for(int i=1; i<=n; i++)
        cout<<get_count(i)<<" ";
    cout<<"\n";
    return 0;
}
