/**
 * Program to find LCM of two numbers
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
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 15, b = 20;
    cout <<"LCM of " << a << " and "
         << b << " is " << lcm(a, b);
    return 0;
}
