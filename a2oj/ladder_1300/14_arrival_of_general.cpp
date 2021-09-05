#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int mn = 0, mx = 0;
    for(int i=0; i<n ;i++){
        if(arr[i]<=arr[mn])
            mn = i;
        if(arr[i]>arr[mx])
            mx = i;
    }
    int ans = mx + n-1 - mn;
    if(mn<mx)
        ans--;
    cout<<ans<<"\n";
    return 0;
}
