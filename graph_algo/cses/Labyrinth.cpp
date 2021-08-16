#include <bits/stdc++.h>
using namespace std;
#define N 1000
char ip[N + 2][N + 2];
bool visited[N + 2][N + 2];

void traverse(int i, int j) {
  if (visited[i][j])
    return;
  visited[i][j] = true;
  if (ip[i][j + 1] == '.')
    traverse(i, j + 1);
  if (ip[i][j - 1] == '.')
    traverse(i, j - 1);
  if (ip[i + 1][j] == '.')
    traverse(i + 1, j);
  if (ip[i - 1][j] == '.')
    traverse(i - 1, j);
}

int main(int argc, char const *argv[]) {
  memset(visited, 0, sizeof(visited));

  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> ip[i][j];
    }
  }

  int rooms = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (!visited[i][j] && ip[i][j] == '.') {
        rooms++;
        traverse(i, j);
      }
    }
  }

  cout << rooms << "\n";
}
