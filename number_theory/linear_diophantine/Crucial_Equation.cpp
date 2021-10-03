/**
 * https://www.spoj.com/problems/CEQU/
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, cse=1;
    cin>>t;
    while (t--){
      ll a,b,c;
      cin>>a>>b>>c;
      ll x0,y0,g;
      if(find_any_solution(a,b,c,x0,y0,g)){
        cout<<"Case "<<cse<<": Yes\n";
      } else{
        cout<<"Case "<<cse<<": No\n";
      }
      cse++;
    }
    
    return 0;
}
