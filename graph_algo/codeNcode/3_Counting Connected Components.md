Connected component:

- if you pick any two vertices from a connected component there exists a path from a to b.

Stongly commected component

- A directed graph is strongly connected if there is a path between all pairs of vertices

```cpp
int count=0;
for(int node=1; node<=n; node++){
    if(!vis[node]){
        count++;
        dfs(node);
    }
}
return count;
```
