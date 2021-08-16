#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int activitySelection(vector<int> start, vector<int> end, int n)
{
    vector<pair<int, int>> activities;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        activities.push_back({start[i], end[i]});
    }
    sort(activities.begin(), activities.end(), comp);
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (activities[i].first > cur)
        {
            // cout<<activities[i].first<<" "<<activities[i].second<<"\n";
            cur = activities[i].second;
            ans++;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
