#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

int kthsmallest(const vector<int> &arr, int k) {
    priority_queue<int> maxHeap;
    for(int x: arr){
        maxHeap.push(x);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
} 

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {3, 5, 1, 2, 4};
    return 0;
}
