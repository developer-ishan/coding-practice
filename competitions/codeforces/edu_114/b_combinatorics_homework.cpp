#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--){
    ll a[3], m;
    cin >> a[0] >> a[1] >> a[2] >> m;
    ll mx = a[0]+a[1]+a[2]-3;
    sort(a, a+3);
    ll mn = 0;
    if(a[0]+a[1]+1 < a[2])
      mn = a[2]-a[0]-a[1]-1;
    if(m>mx || m<mn)
      cout<<"NO\n";
    else
      cout<<"YES\n";
  }
  return 0;
}
