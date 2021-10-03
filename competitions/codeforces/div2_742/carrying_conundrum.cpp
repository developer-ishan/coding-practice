#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a=0, b=0;
        ll p1=1, p2=1;
        bool odd = true;
        while(n){
            if(odd){
                a = a + p1*(n%10);
                p1*=10;
            } else{
                b = b + p2*(n%10);
                p2*=10;
            }
            n/=10;
            odd=!odd;
        }
        // cout<<a<<" "<<b<<"\n";
        ll ans = (a+1)*(b+1) - 2;
        cout<<ans<<"\n";
    }
    return 0;
}
