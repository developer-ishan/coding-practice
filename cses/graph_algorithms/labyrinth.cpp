#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    char mat[n][m];
    vector<vector<char>> dir(n, vector<char>(m, '*'));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int ax, ay, bx=-1, by=-1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
                ax = i, ay = j;
        }

    queue<Node> q;
    q.push({ax, ay});
    vis[ax][ay] = true;
    while (!q.empty())
    {
        Node node = q.front();
        int x = node.x;
        int y = node.y;
        q.pop();
        if (mat[x][y] == 'B')
        {
            bx = x;
            by = y;
            break;
        }
        if (y + 1 < m && mat[x][y + 1] != '#' && !vis[x][y + 1])
        {
            dir[x][y+1] = 'R';
            vis[x][y + 1] = true;
            q.push({x, y + 1});
        }
        if (x + 1 < n && mat[x + 1][y] != '#' && !vis[x + 1][y])
        {
            dir[x+1][y] = 'D';
            vis[x + 1][y] = true;
            q.push({x + 1, y});
        }
        if (y - 1 >= 0 && mat[x][y - 1] != '#' && !vis[x][y - 1])
        {
            dir[x][y-1] = 'L';
            vis[x][y - 1] = true;
            q.push({x, y - 1});
        }
        if (x - 1 >= 0 && mat[x - 1][y] != '#' && !vis[x - 1][y])
        {
            dir[x-1][y] = 'U';
            vis[x - 1][y] = true;
            q.push({x - 1, y});
        }
    }
    string ans;
    if(bx==-1){
        cout<<"NO\n";
    } else{
        while(ax!=bx || ay!=by){
            ans.push_back(dir[bx][by]);
            if(dir[bx][by]=='U')
                bx++;
            else if(dir[bx][by]=='D')
                bx--;
            else if(dir[bx][by]=='R')
                by--;
            else
                by++;
        }
        reverse(ans.begin(), ans.end());
        cout<<"YES\n";
        cout<<ans.size()<<"\n";
        cout<<ans<<"\n";
    }
    return 0;
}
