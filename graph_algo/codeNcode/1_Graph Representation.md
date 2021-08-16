# Adjacency Matrix

- if vertex a,b connected then matrix[a][b] = 1 else 0

Problems:

- Space requirement O(n^2)
- traversal takes n^2
- Adding a new node is not easy

# Adjacency List

no of nodes :n
no of edges :m

```cpp
vector<int> g[n+1];
while(m--){
    cin>>a>>b;
    ar[a].push_back(b);
    ar[b].push_back(a);
}
```
