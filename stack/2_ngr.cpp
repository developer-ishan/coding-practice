/**
 * https://www.geeksforgeeks.org/next-greater-element/
 * 
 * https://www.geeksforgeeks.org/next-greater-element-in-same-order-as-input/
*/

#include<bits/stdc++.h>
using namespace std;

void ngr(vector<int> arr){
    stack<int> s;
    int n = arr.size();


    for(int x: arr){
        while(!s.empty() && s.top() < x){
            cout<<s.top()<<"--->"<<x<<"\n";
            s.pop();
        }
        s.push(x);
    }

    while(!s.empty()){
        cout<<s.top()<<"--->-1\n";
        s.pop();
    }
}

vector<int> ngr_maintain_order(vector<int> arr){
    stack<int> s;
    int n = arr.size();
    vector<int> res(n,-1);

    for(int i=n-1; i>=0; i--){
        int x = arr[i];

        while(!s.empty() && s.top() < x)
            s.pop();

        if(s.empty())
            res[i] = -1;
        else
            res[i] = s.top();

        s.push(x);
    }

    return res;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr{ 6, 8, 0, 1, 3 };
    cout<<"ngr:\n";
    ngr(arr);

    vector<int> res = ngr_maintain_order(arr);
    cout<<"ngr_maintail_order\n";
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<"-->"<<res[i]<<"\n";

    return 0;
}
