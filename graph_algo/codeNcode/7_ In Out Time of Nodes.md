# In Out Time of Nodes

## Motivation to study

- Given two nodes, find whether one node in the subtree of other node.
- The same concept in finding articulation point , finding bridges and also in flattening the tree so that Mo's algorithm can be used in there.

```cpp
int timer = 1;
void dfs(int v){
    vis[v] = 1;
    in[v] = timer++;

    for(int child: g[v]){
        if(!vis[child])
            dfs(child);
    }

    out[v]=timer++;
}
```

- in time of node is greater than the in time of root
- out time of node is less than the out time of root

## Practice

https://www.codechef.com/problems/FIRESC
