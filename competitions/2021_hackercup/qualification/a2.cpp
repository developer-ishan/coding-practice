#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char c){
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return true;
    return false;
}
int solve(string str){
    int vow = 0, con = 0;
    vector<int> freq(26, 0);
    for(char c: str){
        freq[c-'A']++;
        if(is_vowel(c)){
            vow++;
        }else{
            con++;
        }
    }
    int ans = INT_MAX;
    for(int i=0; i<26; i++){
        int cur;
        char c = 'A'+i;
        if(is_vowel(c)){
            cur = con + 2*(vow - freq[c-'A']);
        } else{
            cur = vow + 2*(con - freq[c-'A']);
        }
        // cout<<"\t"<<c<<": "<<cur<<"\n";
        ans = min(ans, cur);
    }
    return ans;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("a1_input.txt", "r", stdin);
    // freopen("a1_output.txt", "w", stdout);

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        string s;
        cin>>s;
        printf("Case #%d: %d\n", i,solve(s));
    }
    return 0;
}
