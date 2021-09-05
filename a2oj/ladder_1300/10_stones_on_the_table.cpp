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
    string str;
    cin>>str;
    int ans = 0;
    for(int i=0; i<n; i++){
        int j = i+1;
        while(str[i] == str[j]){
            ans++;
            j++;
        }
        i = j-1;
    }
    cout<<ans<<"\n";
    return 0;
}
