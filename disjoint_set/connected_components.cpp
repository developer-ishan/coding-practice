/**
 * https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/tutorial/
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> parent, Rank;
void makeSet(int n){
    parent = vector<int>(n);
    Rank = vector<int>(n);
    for(int i=0; i<n; i++)
        Rank[i] = 1, parent[i] = i;
}
int find(int x){
    if(parent[x]==x)
        return x;
    return parent[x] = find(parent[x]);
}
void Union(int x, int y){
    int setx = find(x);
    int sety = find(y);

    if(setx == sety)
        return;

    if(Rank[setx] < Rank[sety]){
        parent[setx] = sety;
        Rank[sety] += Rank[setx];
    } else {
        parent[sety] = setx;
        Rank[setx] += Rank[sety];
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    makeSet(n+1);
    while(m--){
        int a,b;
        cin>>a>>b;
        Union(a,b);

        vector<int> ans;
        for(int i=1; i<=n; i++)
            if(parent[i]==i)
                ans.push_back(Rank[i]);
        sort(ans.begin(), ans.end());
        for(int x: ans)
            cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}
