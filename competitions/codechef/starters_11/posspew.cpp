#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007
#define fo(i, b, n) for (long i = b; i < n; ++i)

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n, k, sum = 0;
        cin>>n>>k;
        vector<ll> a(n);
        fo(i, 0, n) cin >> a[i];

        vector<ll> dist(n, -1);
        queue<ll> q;
        fo(i, 0, n)
        {
            sum += a[i];
            if (a[i] > 0)
            {
                dist[i] = 0;
                q.push(i);
            }
        }

        while (!q.empty())
        {
            ll p = q.front();
            q.pop();

            ll i1 = (p + 1) % n, i2 = (p - 1 + n) % n;
            if (dist[i1] == -1)
            {
                dist[i1] = 1 + dist[p];
                q.push(i1);
            }
            if (dist[i2] == -1)
            {
                dist[i2] = 1 + dist[p];
                q.push(i2);
            }
        }

        fo(i, 0, n)
        {
            if (dist[i] < 0)
                continue;
            if (k - dist[i] <= 0)
                continue;
            sum = sum + 2ll * (k - dist[i]);
        }
        cout << sum << "\n";
         
    }
    return 0;
}
