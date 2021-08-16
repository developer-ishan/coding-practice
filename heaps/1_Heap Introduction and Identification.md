# Heap Introduction and Identification

Heap

- Max heap
- Min heap

Identification

- K
- Smallest/largest

Identify

- Smallest + k ---> Max heap
- largest + k --> Min heap

Question

    Find kth smallest element

## Coding

```cpp
priority_queue<int> maxHeap;
priority_queue <int, vector<int>, greater<int> > minHeap;
```
