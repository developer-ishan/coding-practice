# Finding diameter of Tree

Longest path between any two nodes of the tree.

- Using two dfs calls
- Take any node as root and run dfs, find the farthest node from the root(x)
- Run the dfs on the x and find the max distance from this node, the distance we get now will be the diameter.

## Proof

https://codeforces.com/blog/entry/60440

- Root lies on the diameter
  Assume farthest node is y not one of the endpoint
  the endpont is uv
  vr>ry && ur>ry
  contradiction
  hence y must be one of the end point
- Root not on the diameter
