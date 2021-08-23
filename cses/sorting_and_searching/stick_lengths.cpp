#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr.begin(), arr.end());
    int median = 0;
    if(n%2){
        median = arr[n/2];
    } else{
        median = (arr[n/2-1] + arr[n/2])/2;
    }
    long long ans = 0;
    for(int i=0; i<n ;i++){
        ans+=abs(arr[i]-median);
    }
    cout<<ans<<"\n";
    return 0;
}