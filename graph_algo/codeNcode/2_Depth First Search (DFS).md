# Depth first Search

- Level of a node

```cpp
void dfs(int v){
    vis[v]=1;
    cout<<v<<" ";
    for(int child:g[v]){
        if(!vis[child])
            dfs(child);
    }
}
```
