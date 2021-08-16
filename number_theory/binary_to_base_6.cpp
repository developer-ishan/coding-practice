/**
 * https://www.hackerrank.com/contests/goc-cdc-series-10/challenges/itsybitsy
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        __int128 x=0;
        stack<int> s;
        for(int i=0; i<n ;i++){
            int f;
            cin>>f;
            s.push(f);
        }
        while(!s.empty()){
            x = x<<1 | s.top();
            s.pop();
        }
        if(x==0)
            cout<<0;
        while(x){
            cout<<(int)(x%6)<<" ";
            x = x / 6;
        }
        cout<<"\n";
    }
    return 0;
}
