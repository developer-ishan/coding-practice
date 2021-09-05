#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cur;
    cin>>cur;
    int nxt = cur+1;
    while(true){
        int a = nxt%10;
        int b = (nxt/10)%10;
        int c = (nxt/100)%10;
        int d = (nxt/1000)%10;
        if(a==b || a==c || a==d || b==c || b==d || c==d)
            nxt++;
        else{
            cout<<nxt<<"\n";
            return 0;
        }
    }
    return 0;
}
