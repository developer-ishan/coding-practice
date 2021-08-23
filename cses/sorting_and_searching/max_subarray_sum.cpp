#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long ans = 0, max_ending_here = 0;
    for(int i=0; i<n ;i++){
        max_ending_here += arr[i];
        if(max_ending_here<0)
            max_ending_here = 0;
        ans = max(ans, max_ending_here);
    }
    int mn = INT_MIN;
    for(int i=0; i<n ;i++){
        mn = max(mn, arr[i]);
    }
    if(ans==0)
        ans = mn;
    cout<<ans<<"\n";
    return 0;
}
