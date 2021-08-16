#include <bits/stdc++.h>
using namespace std;

vector<int> calculateSpan(int arr[], int n)
{
    stack<pair<int, int>> s;
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        while (!s.empty() && s.top().first <= x)
            s.pop();
        if (s.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - s.top().second;
        }
        s.push({x, i});
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
