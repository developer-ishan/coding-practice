#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int state[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++){
        int count;
        cin>>count;
        state[i][j] = (state[i][j] + count)%2;
        if(i-1>=0)
            state[i-1][j] = (state[i-1][j]+ count)%2;
        if(i+1<3)
            state[i+1][j] = (state[i+1][j] + count)%2;
        if(j-1>=0)
            state[i][j-1] = (state[i][j-1] + count)%2;
        if(j+1<3)
            state[i][j+1] = (state[i][j+1] + count)%2;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<state[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
