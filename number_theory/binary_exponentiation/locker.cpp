/**
 * https://www.spoj.com/problems/LOCKER/
*/
#include<bits/stdc++.h>
typedef long long ll;
#define M 1000000007
using namespace std;

// binary exponentiation
ll binPow(ll a, ll n) {
	if(n == 0)
		return 1;
	if(n == 1)
		return a%M;
	ll r = binPow(a, n/2);
	if(n % 2 == 0) {
		return (r%M * r%M)%M;
	}
	else 
		return (r%M * r%M * a%M)%M;
}

int main () {
	ll t, n;
	cin >> t;
	while(t--) {
		ll ans, n1;
		cin >> n;
		if(n < 3) {
			cout << n << endl;
			continue;
		}
		// if remainder is 1, say for eg n = 10
		// we might think of choosing the combination: 3, 3, 3, 1
		// but you can notice that 1 in the above combination is not giving us any significant profit
		// as any number multiplied by 1 gives the same number. Rather it would be better if instead of 
		// 3*1 we have 2*2 (notice they'll still have same sum but different products)
		if(n%3 == 1) {
			n1 = (n - 4) / 3;
			ans = 4*binPow(3, n1);
		}
		else if(n%3 == 2){
			n1 = (n - 2) / 3;
			ans = 2*binPow(3, n1);
		}
		else 
			ans = binPow(3, n/3);
		ans %= M;
		cout << ans << endl;
	}
	
}