# Bipartite Graph Test

Bipartite graph is a graph whose vertices can be divided into two disjoint sets U and V such that every edge connects a vertex in U to one in V.

```cpp
bool dfs(int v, int c){
    vis[v] = 1;
    col[v] = c;

    for(int child: g[v]){

        if(!vis[child]){
            if(dfs(child, !c))
                return false;
        }else if(col[v] == col[child]){
            return false;
        }
    }
    return true;
}
```
