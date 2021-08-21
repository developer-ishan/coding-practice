#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    int a[n], b[m];
    for(int i=0; i<n ;i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    int ans = 0;
    
    sort(a, a+n);
    sort(b, b+m);
    int i=0, j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            i++, j++;
            ans++;
        } else if(a[i]<b[j]){
            i++;
        } else{
            j++;
        }
    }
    
    cout<<ans<<"\n";
    return 0;
}
