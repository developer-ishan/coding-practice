#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n], dep[n];
    for(int i=0; i<n; i++)
        cin>>arr[i]>>dep[i];
    sort(arr, arr+n);
    sort(dep, dep+n);
    int i=0, j=0;
    int ans = 0, cur=0;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            cur++;
            i++;
        }else{
            cur--;
            j++;
        }
        ans = max(ans, cur);
    }
    cout<<ans<<"\n";
    return 0;
}
