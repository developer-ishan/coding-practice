#include <bits/stdc++.h>
using namespace std;
#define N 10
/*
Depth-first search always follows a single path in the graph as long as it
finds new nodes. After this, it returns to previous nodes and begins to explore
other parts of the graph. The algorithm keeps track of visited nodes, so that it
processes each node only once.
*/
bool visited[N];
vector<int> adj[N];
void dfs(int v) {
  if (visited[v])
    return;
  visited[v] = true;
  for (int x : adj[v])
    dfs(x);
}

int main(int argc, char const *argv[]) { return 0; }
