#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,n;
    cin>>a>>b>>n;

    while(n--){
        for(int i=1; i<=9; i++){
            if((a*10+i)%b==0){
                a=a*10+i;
                break;
            }
        }
        if(a%b!=0){
            cout<<"-1\n";
            return 0;

        }
    }
    cout<<a<<"\n";
    return 0;
}
