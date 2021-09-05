#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    for(int i=0; i<5; i++)
    for(int j=0; j<5; j++)
    {
        int n;
        cin>>n;
        if(n==1)
            x=i, y=j;
    }
    int moves = abs(2-x) + abs(2-y);
    cout<<moves<<"\n";
    return 0;
}
