#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    multiset<int> price;

    while(n--){
        int x;
        cin>>x;
        price.insert(x);
    }

    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        auto it = price.lower_bound(x);
        if(*it == x){
            cout<<x<<"\n";
            price.erase(it);
        }
        else if(it==price.begin())
            cout<<"-1\n";
        else{
            --it;
            cout<<*it<<"\n";
            price.erase(it);
        }
    }
    return 0;
}
