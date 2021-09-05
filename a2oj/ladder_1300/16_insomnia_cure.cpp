#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,l,m,n,D;
    cin>>k>>l>>m>>n>>D;
    int safe = 0;
    for(int d = 1; d<=D; d++){
        if(d%k && d%l && d%m && d%n)
            safe++;
    }
    cout<<D-safe<<"\n";
    return 0;
}
