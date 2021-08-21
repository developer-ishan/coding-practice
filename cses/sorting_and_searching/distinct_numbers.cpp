#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<"\n";
    return 0;
}
