#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n, ans=0;
        cin>>n;
        vector<string> col(n);

        for(int ll i=0; i<n ;i++){
            char c;
            cin>>c;
            col[i].push_back(c);
        }
        for(int ll i=0; i<n ;i++){
            char c;
            cin>>c;
            col[i].push_back(c);
        }
        
        ll i=0;
        while(i<n){
            if(col[i][0] != col[i][1]){
                i++;
                ans+=2;
            } else if((i+1<n && col[i]=="11" && col[i+1]=="00") || (i+1<n && col[i]=="00" && col[i+1]=="11")){
                ans+=2;
                i+=2;
            } else if(col[i]=="00"){
                ans+=1;
                i++;
            }else{
                i++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
