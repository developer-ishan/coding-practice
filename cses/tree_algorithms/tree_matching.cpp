#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int n;
int get_matching(int node){
    for(int child: g[node]){
        
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    g.resize(n+1);

    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    return 0;
}
