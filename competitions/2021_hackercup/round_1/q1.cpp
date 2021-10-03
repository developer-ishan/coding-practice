#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define E 2.71828182846
#define MOD 1000000007

ll solve(string ip){

    bool left = true;
    ll count_l = 0;
    for(char c: ip){
        if(c=='O' && left){
            left = !left;
            count_l++;
        } else if(c=='X' && !left){
            left = !left;
            count_l++;
        }
    }

    left = false;
    ll count_r = 0;
    for(char c: ip){
        if(c=='O' && left){
            left = !left;
            count_r++;
        } else if(c=='X' && !left){
            left = !left;
            count_r++;
        }
    }

    return min(count_l, count_r);
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("a1_input.txt", "r", stdin);
    // freopen("a1_output.txt", "w", stdout);

    ll T;
    cin>>T;
    for(ll t=1; t<=T; t++){
        ll n;
        string ip;
        cin>>n;
        cin>>ip;
        ll ans = solve(ip);
        printf("Case #%lld: %lld\n", t,ans);
    }
    return 0;
}
