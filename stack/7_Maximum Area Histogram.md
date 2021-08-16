# 7 Maximum Area Histogram | MAH

Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.

https://www.geeksforgeeks.org/largest-rectangle-under-histogram/

https://leetcode.com/problems/largest-rectangle-in-histogram/

```cpp
class Solution {
public:
    vector<int> get_nsl(vector<int> arr){
        stack<int> s;
        int n = arr.size();
        vector<int> ans(n, -1);
        for(int i=0; i<n; i++){
            while(!s.empty() && arr[s.top()]>=arr[i])
                s.pop();
            if(s.empty())
                ans[i] = -1;
            else
                ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> get_nsr(vector<int> arr){
        stack<int> s;
        int n = arr.size();
        vector<int> ans(n, 1);
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && arr[s.top()]>=arr[i])
                s.pop();
            if(s.empty())
                ans[i] = n;
            else
                ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nsr = get_nsr(heights);
        vector<int> nsl = get_nsl(heights);
        int max_area = 0, n = heights.size();
        
        for(int i=0; i<n; i++){
            int width = nsr[i] - nsl[i] - 1;
            int area = heights[i]*width;
            max_area = max(max_area, area);
            // cout<<heights[i]<<" "<<nsl[i]<<" "<<nsr[i]<<"\n";
        }
        return max_area;
    }
};
```