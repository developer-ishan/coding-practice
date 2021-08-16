#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
private:
    vector<int> rank, parent;
    int n;
public:
    DisjointSet(int n);
    void makeSet();
    int find(int n);
    void Union(int x, int y);
    ~DisjointSet();
};

DisjointSet::DisjointSet(int n)
{
    this->n = n;
    rank = vector<int>(n);
    parent = vector<int>(n);
    makeSet();
}

void DisjointSet::makeSet(){
    for(int i=0; i<n; i++)
        parent[i] = i;
}

int DisjointSet::find(int x){
    if(parent[x] = x)
        return x;

    return parent[x] = find(parent[x]); //path compression
}

void DisjointSet::Union(int x, int y){
    int xset = find(x);
    int yset = find(y);

    if(xset == yset)
        return;
    //union by rank
    if(rank[xset] < rank[yset])
        parent[xset] = yset;
    else if(rank[xset] > rank[yset])
        parent[yset] = xset;
    else{
        parent[yset] = xset;
        rank[xset]++;
    }
}

DisjointSet::~DisjointSet()
{
    rank.erase(rank.begin(), rank.end());
    parent.erase(parent.begin(), parent.end());

}

int main()
{
    DisjointSet obj(5);
    obj.Union(0, 2);
    obj.Union(4, 2);
    obj.Union(3, 1);
    if (obj.find(4) == obj.find(0))
        cout << "Yes\n";
    else
        cout << "No\n";
    if (obj.find(1) == obj.find(0))
        cout << "Yes\n";
    else
        cout << "No\n";
  
    return 0;
}