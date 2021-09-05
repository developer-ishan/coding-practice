#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str, ans;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='.')
            ans.push_back('0');
        else if(str[i]=='-' && str[i+1]=='.')
            ans.push_back('1'), i++;
        else
            ans.push_back('2'), i++;
    }
    cout<<ans<<"\n";
    return 0;
}
