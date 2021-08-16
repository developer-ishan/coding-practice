/**
 * Given an array where every element
 * occurs three times, except one element
 * which occurs only once.
 * Find the element that occurs once.
 * The expected time complexity is O(n) and
 * O(1) extra space.
 * https://www.geeksforgeeks.org/find-the-element-that-appears-once/
 */
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr) {
  int tn = INT_MAX, tnp1 = 0, tnp2 = 0;

  for (int x : arr) {
    int atn = x & tn;
    int atnp1 = x & tnp1;
    int atnp2 = x & tnp2;

    tn = tn & (~atn);
    tnp1 = tnp1 | atn;

    tnp1 = tnp1 & (~atnp1);
    tnp2 = tnp2 | (atnp1);

    tnp2 = tnp2 & (~atnp2);
    tn = tn | atnp2;
  }

  return tnp1;
}
int main(int argc, char const *argv[]) {
  vector<int> arr{12, 1, 12, 3, 12, 1, 1, 2, 3, 3};
  cout << solve(arr) << "\n";
  return 0;
}
