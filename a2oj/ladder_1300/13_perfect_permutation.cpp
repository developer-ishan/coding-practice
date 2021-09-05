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
    if(n%2)
        cout<<"-1\n";
    else{
        for(int i=1; i<=n; i++){
            if(i%2){
                cout<<i+1<<" ";
            }else{
                cout<<i-1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
