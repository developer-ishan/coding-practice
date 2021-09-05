#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int t;
    string str;
    cin>>n>>t;
    cin>>str;
    for(int i=0; i<t; i++){
        for(int j=0; j<n-1; j++){
            if(str[j]=='B' && str[j+1]=='G'){
                swap(str[j], str[j+1]); 
                j++;
            }
        }
    }
    cout<<str<<"\n";
    return 0;
}
