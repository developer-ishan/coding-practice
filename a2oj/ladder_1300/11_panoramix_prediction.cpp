#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

bool is_prime(int n){
    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0)
            return false;
    return true;
}
int next_prime(int n){
    while(true){
        if(is_prime(n+1))
            return n+1;
        n++;
    }
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin>>a>>b;
    if(next_prime(a) == b)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
