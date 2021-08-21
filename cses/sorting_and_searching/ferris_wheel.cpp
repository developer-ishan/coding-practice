#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin>>n>>x;
    vector<int> w(n);
    for(int i=0; i<n ;i++)cin>>w[i];

    int l = 0, r = n-1;
    int ans = 0;
    sort(w.begin(), w.end());
    while(l<=r){
        if(w[l]+w[r]<=x){
            ans++;
            l++, r--;
        } else{
            ans++;
            r--;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
