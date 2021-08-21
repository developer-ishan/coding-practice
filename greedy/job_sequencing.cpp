/**
 * https://www.geeksforgeeks.org/job-sequencing-problem/
 * greedy solution in of O(n^2)
 * DSU solution is more efficient O(n)
*/
#include<bits/stdc++.h>
using namespace std;


class Job{
    public:
        int deadline, profit;
        string id;
        Job(string id, int deadline, int profit){
            this->id = id;
            this->deadline = deadline;
            this->profit = profit;
        }

        bool operator<(Job const &a){
            return profit < a.profit;
        }
};

vector<Job> get_jobs(vector<Job> jobs){
    sort(jobs.rbegin(), jobs.rend());
    int n = jobs.size();
    vector<Job> ans;
    vector<int> result(n);
    vector<bool> slot(n, false);

    for(int i=0; i<n ;i++){
        for(int j=min(n, jobs[i].deadline)-1; j>=0; j--){
            if(!slot[j]){
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    for (int i=0; i<n; i++)
        if (slot[i])
            ans.push_back(jobs[result[i]]);
    return ans;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<Job> jobs = { 
        Job("a", 2, 100), 
        Job("b", 1, 19), 
        Job("c", 2, 27),
        Job("d", 1, 25),
        Job("e", 3, 15)
    };

    vector<Job> choosen = get_jobs(jobs);
    for(Job job: choosen)
        cout<<job.id<<" ";
    cout<<"\n";
    return 0;
}