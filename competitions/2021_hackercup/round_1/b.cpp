#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define E 2.71828182846
#define MOD 1000000007

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("b_input.txt", "r", stdin);
    // freopen("b_output.txt", "w", stdout);

    ll T;
    cin >> T;
    for(int t=1;t<=T;t++)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        bool flag=false;
        vector<vector<int>> arr(n,vector<int>(m,1000));
        if(a<n+m-1||b<n+m-1){
            flag = true;
        }
        else{
            for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(i==0||j==0||j==m-1)
                arr[i][j]=1;
            }

            arr[n-1][0]=b-(n+m-2);
            arr[n-1][m-1] = a-(n+m-2);
        }
        if(flag){
            printf("Case #%d: Impossible\n",t);
        }
        else{
            printf("Case #%d: Possible\n",t);
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++)
                    printf("%d ",arr[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}
