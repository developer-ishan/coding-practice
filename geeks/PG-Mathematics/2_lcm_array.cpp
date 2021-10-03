/**
 * LCM of given array elements
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll gcd(ll a, ll b){
  if(b==0)
    return a;
  return gcd(b, a%b);
}

ll lcm(ll a, ll b){
  return a*b/gcd(a, b);
}

ll lcm(vector<ll> arr){
  ll ans = 1;
  for(ll i=0; i<arr.size(); i++)
    ans = lcm(ans, arr[i]);
  return ans;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<lcm({1,2,3,4,5})<<"\n";    
    return 0;
}
