#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

vector<vector<int>> g;
vector<bool> vis;

int mx_dis, mx_node;
void dfs(int x, int dis){
    vis[x] = true;
    if(dis>mx_dis){
        mx_dis = dis;
        mx_node = x;
    }
    for(int child: g[x])
        if(!vis[child])
            dfs(child, dis+1);
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    g.resize(n+1);
    vis.resize(n+1, false);
    for(int i=0; i<n-1 ;i++){
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    mx_dis = 0;
    mx_node = 1;
    dfs(1, 0);

    mx_dis = 0;
    for(int i=0; i<vis.size(); i++)
        vis[i] = false;
    dfs(mx_node, 0);
    cout<<mx_dis<<"\n";
    return 0;
}
