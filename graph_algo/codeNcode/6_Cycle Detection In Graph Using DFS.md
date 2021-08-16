# Cycle Detection In Graph Using DFS

If there is a cycle in graph, this means we can have alternate paths in a graph.

```cpp
bool dfs(int node, int parent){
    vis[node] = 1;
    for(int child: g[node]){
        if(vis[child]==0){
            if(dfs(child, node)==true)
                return true;
        }else if(child!=parent)
            return true;
    }
    return false;
}
```
