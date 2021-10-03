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
        ll n;
        cin>>n;
        if(n==2){
            cout<<"-1 -1\n";
            cout<<"-1 -1\n";
        } else{
            for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j)
                    cout<<"-1";
                else
                    cout<<"1";

                cout<<" ";
            }
            cout<<"\n";
        }
        }
    }
    return 0;
}
