#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

void sort(vector<int> &arr){
    int n = arr.size();
    int i=0;
    while(i<n){
        int correct_pos = arr[i]-1;
        if(correct_pos == i){
            i++;
        } else{
            swap(arr[correct_pos], arr[i]);
        }
    }
}
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {3, 5, 2, 1, 4};
    sort(arr);
    for(int n: arr)
        cout<<n<<" ";
    cout<<"\n";
    return 0;
}
