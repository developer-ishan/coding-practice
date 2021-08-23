#include<bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
#define start first
#define endT second 

bool comp(pi a, pi b){
    return a.endT < b.endT;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<pi> movies;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;
        movies.push_back({a, b});
    }
    sort(movies.begin(), movies.end(), comp);
    int cur = 0;
    int ans = 0;
    for(pi movie: movies){
        if(cur<=movie.start){
            cur = movie.endT;
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
