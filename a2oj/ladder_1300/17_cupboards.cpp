#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,N;
    cin>>N;
    n=N;
    int l1=0, r1=0;
    while(n--){
        int l, r;
        cin>>l>>r;
        if(l)
            l1++;
        if(r)
            r1++;
    }
    int ans = min(l1, N-l1) + min(r1, N-r1);
    cout<<ans<<"\n";
    return 0;
}
