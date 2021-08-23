#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n ;i++)cin>>arr[i];
    

    map<int, int> m;
    for(int i=0; i<n ;i++){
        auto it = m.find(x-arr[i]);
        if(it!=m.end()){
            cout<<i+1<<" "<<it->second+1<<"\n";
            return 0;
        }
        m[arr[i]] = i;
    }
    cout<<"IMPOSSIBLE\n";
    return 0;
}