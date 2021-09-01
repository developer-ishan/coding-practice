#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> vis;
int n;
void dfs(int node){
    vis[node] = true;
    for(int child: g[node]){
        if(!vis[child])
            dfs(child);
    }
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cin>>n>>m;
    g.resize(n+1);
    while(m--){
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vis.resize(n+1, false);
    dfs(1);
    vector<pair<int, int>> ans;
    for(int i=2; i<=n; i++){
        if(!vis[i]){
            ans.push_back({1, i});
            dfs(i);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto edge: ans)
        cout<<edge.first<<" "<<edge.second<<"\n";
    return 0;
}
