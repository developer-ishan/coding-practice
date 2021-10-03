#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll s = 0;
  for (int i = 0; i < n; i++)
    s += a[i];
  for (int i = 0; i < n; i++)
    b[i] = s - a[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll m;
  cin >> m;
  ll pre[n];
  pre[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pre[i] = pre[i - 1] + a[i];
  }
  while (m--)
  {
    ll x, y;
    cin >> x >> y;
    ll c1 = 0, c2 = 0;
    if (x > a[n - 1])
    {
      c1 += x - a[n - 1];
      ll tmp = s - a[n - 1];
      c1 += max(0ll, y - tmp);
    }
    else if (x < a[0])
    {
      ll tmp = s - a[0];
      c1 += max(0ll, y - tmp);
    }
    else
    {
      ll l = 0, r = n - 1, xx = -1;
      while (l <= r)
      {
        ll mm = l + (r - l) / 2;
        if (a[mm] <= x)
          xx = mm, l = mm + 1;
        else
          r = mm - 1;
      }
      c1 = max(0ll, x - a[xx]);
      ll tmp = s - a[xx];
      c1 += max(0ll, y - tmp);
      if (xx != n - 1)
      {
        tmp = s - a[xx + 1];
        c2 = max(0ll, y - tmp);
        c1 = min(c1, c2);
      }
    }
    cout<<c1<<"\n";
  }

  return 0;
}
