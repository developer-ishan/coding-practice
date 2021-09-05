#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;
    int lower=0, upper=0;
    for(char c: str){
        if(c>='A' && c<='Z')
            upper++;
        else
            lower++;
    }
    if(lower>=upper)
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    else
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<"\n";
    return 0;
}
