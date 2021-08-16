#include<bits/stdc++.h>
using namespace std;

void decimal_to_binary(int n){
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    decimal_to_binary(10);
    cout<<"\n";
    decimal_to_binary(-10);
    cout<<"\n";

    return 0;
}
