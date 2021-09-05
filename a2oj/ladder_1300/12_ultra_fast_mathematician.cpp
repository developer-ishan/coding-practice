#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin>>a>>b;
    bitset<101> x(a), y(b);
    string ans = (x^y).to_string();
    cout<<ans.substr(101 - a.size())<<"\n";
    return 0;
}
