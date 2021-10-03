#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str, ans;
        cin>>str;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='L'){
                ans.push_back('L');
                ans.push_back('R');
                i++;
            } else if(str[i]=='U'){
                ans.push_back('D');
            } else{
                ans.push_back('U');
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
