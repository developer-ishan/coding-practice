#include <bits/stdc++.h>
using namespace std;
#define N 10

void bfs(vector<int> adj[]) {
  // variables
  queue<int> q;
  bool visited[N];
  int distance[N];

  // starting point
  int x = 0;

  // algo
  visited[x] = true;
  distance[x] = 0;
  q.push(x);
  while (!q.empty()) {
    int s = q.front();
    q.pop();
    for (int u : adj[x]) {
      if (visited[u])
        continue;
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }
}
int main(int argc, char const *argv[]) { return 0; }
