/**
 * https://codeforces.com/contest/1574/problem/0
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

void generate_p(ll n, ll open, ll close, string s, ll &count){
  if(count==n)  
    return;
  if(open==n && close == n){
    cout<<s<<"\n";
    count++;
    return;
  }
  if(open < n){
    generate_p(n, open+1, close, s+"(", count);
  }

  if(close<open){
    generate_p(n, open, close+1, s+")", count);
  }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll count = 0;
      generate_p(n, 0, 0, "",count);
    }
    return 0;
}
