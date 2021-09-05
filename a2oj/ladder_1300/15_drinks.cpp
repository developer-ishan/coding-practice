#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,N;
    cin>>N;
    n=N;
    int sum = 0;
    while (n--){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<(double)sum/N<<"\n";
    return 0;
}
