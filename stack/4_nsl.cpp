#include<bits/stdc++.h>
using namespace std;

vector<int> nsl_maintain_order(vector<int> arr){
    stack<int> s;
    int n = arr.size();
    vector<int> res(n,-1);

    for(int i=0; i<n; i++){
        int x = arr[i];

        while(!s.empty() && s.top() > x)
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

    vector<int> arr{ 4, 5, 2, 10, 8 };
    

    vector<int> res = nsl_maintain_order(arr);
    cout<<"nsl_maintail_order\n";
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<"-->"<<res[i]<<"\n";

    return 0;
}
