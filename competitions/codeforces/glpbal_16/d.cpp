#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define E 2.71828182846
#define MOD 1000000007

ll last(vector<ll> arr, ll low, ll high, ll x, ll n)
{
    if (high >= low) {
        ll mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}

ll inconv(vector<ll> seat, ll pos){
    int count = 0;
    for(int i=0; i<pos; i++)
        if(seat[i]!=-1)
            count++;
    return count;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n, m, ans=0;
        cin>>n>>m;
        vector<ll> a(m), corr(m);
        vector<ll> seat(m, -1);
        for(int i=0; i<m; i++){
            cin>>a[i];
            corr[i] = a[i];
        }
        sort(corr.begin(), corr.end());

        for(ll person: a){
            ll pos = last(corr, 0, m, person, m);
            for(ll i = pos; i>=0; i--){
                if(seat[pos]==-1)
                    break;
            }
            seat[pos] = person;
            ans+=inconv(seat, pos);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
