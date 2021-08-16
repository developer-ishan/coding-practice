# BFS

```cpp
bfs(G, s){
    //part 1
    //initialization
    for each vertex v in G except the source node s
    color [v] = white; //means it is a fresh node
    d[v] = inf;
    p[v] = null;

    //part 2
    //process starting node
    color[s] = grey;
    d[s] = 0;
    p[s] = null;

    queue<node> q;
    q.push(s);
    while(!q.empty()){
        u = q.pop();
        for all neighbours of v of u
            if color[v] = white//if fresh
                color[v] = grey//touch it
                dis[v]=dis[u]+1
                p[v]=u;//because u has discovered v
    }
}
```
