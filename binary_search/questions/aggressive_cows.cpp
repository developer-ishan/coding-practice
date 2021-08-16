#include <bits/stdc++.h>
using namespace std;

#define ll long long
int num_cows(vector<int> arr, int m) {
  int n = arr.size();
  int x = 1, prev = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] - prev >= m) {
      x++;
      prev = arr[i];
    }
  }
  return x;
}
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());
    int l = 0, r = arr.back(), m;
    int ans = INT_MIN;
    while (l <= r) {
      m = l + (r - l) / 2;
      int num_c = num_cows(arr, m);
      if (num_c >= c) {
        l = m + 1;
        ans = max(m, ans);
      } else {
        r = m - 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}