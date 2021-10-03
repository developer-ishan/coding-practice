#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll findFloor(vector<ll> a, ll n, ll x)
{

  ll start = 0, end = n - 1, mid;
  ll result = 0;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (a[mid] == x)
    {
      return a[mid];
    }
    else if (a[mid] < x)
    {
      result = mid;
      start = mid + 1;
    }
    else
      end = mid - 1;
  }
  return a[result];
}

ll findCeil(vector<ll> a, ll n, ll x)
{

  ll start = 0, end = n - 1, mid;
  ll result = n - 1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (a[mid] == x)
    {
      return a[mid];
    }
    else if (a[mid] < x)
    {

      start = mid + 1;
    }
    else
    {
      result = mid;
      end = mid - 1;
    }
  }
  return a[result];
}
int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, sum = 0;
  cin >> n;
  vector<ll> soldier(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> soldier[i];
    sum += soldier[i];
  }
  sort(soldier.begin(), soldier.end());

  ll m;
  cin >> m;
  for (ll i = 0; i < m; i++)
  {
    ll def, att, ans_f = 0, ans_c;
    cin >> def >> att;
    ll floor = findFloor(soldier, n, def);
    ll ceil = findCeil(soldier, n, def);

    if (floor < def)
      ans_f = ans_f + def - floor;
    if (sum - floor < att)
      ans_f = ans_f + att - (sum - floor);

    if (ceil < def)
      ans_c = ans_c + def - ceil;
    if (sum - ceil < att)
      ans_c = ans_c + att - (sum - ceil);

    cout << min(ans_f, ans_c) << "\n";
  }
  return 0;
}
