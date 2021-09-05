#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

bool is_lucky(int n){
    if(n==0)
        return false;
    while(n){
        if(n%10!=4 && n%10!=7)
            return false;
        n/=10;
    }
    return true;
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    int count=0;
    for(char c: str){
        if(c=='4' || c=='7')
            count++;
    }
    if(is_lucky(count))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
