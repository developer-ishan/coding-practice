#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        bool o = false;
        bool z = false;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='0')
                z=true;
            if(str[i]=='1')
                o = true;
        }
        ll mex = 0;
        if(o && z)
            mex = 2;
        else if(!z)
            mex = 0;
        else if(!o)
            mex = 1;
        
        ll i=0, count=0;
        while(i<str.size()){
            if(str[i]=='0'){
                while(i<str.size() && str[i]=='0')
                    i++;
                count++;
            }
            i++;
        }
        cout<<min(count, mex)<<"\n";
    }
    return 0;
}
