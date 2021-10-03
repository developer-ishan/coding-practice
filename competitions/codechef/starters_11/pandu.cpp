#include <bits/stdc++.h>

using namespace std;

#define N 100002
#define MOD 1000000007
#define fo(i, b, n) for (long i = b; i < n; ++i)
#define rfo(i, b, n) for (long i = b; i >= n; --i)
#define all(ar) ar.begin(), ar.end()
#define rall(ar) ar.rbegin(), ar.rend()
#define mem(ar, val) memset(ar, (val), sizeof(ar))
#define fi first
#define se second
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl;
#define deb2(x, y) cout << #x << '=' << x << ', ' << #y << '=' << y << endl;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.precision(12);

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

const double PI = 3.1415926535897932384626;
const ll oo = 1e18;

signed main()
{
    fastIO;
    long t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k, res = 0;
        cin >> n >> k;
        vector<ll> a(n);
        fo(i, 0, n) cin >> a[i];

        vll dist(n, -1);
        queue<ll> q;
        fo(i, 0, n)
        {
            res += a[i];
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
            res = res + 2ll * (k - dist[i]);
        }
        cout << res << endl;
    }
    return 0;
}