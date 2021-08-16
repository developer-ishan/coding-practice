# Find an Element in a Rotated Sorted Array

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

```cpp
class Solution {
public:
    int bs(vector<int> a, int x,int l, int r){
        int mid;
        while(l<=r){
            mid = l + (r-l)/2;
            if(a[mid] == x)
                return mid;
            if(a[mid]<x)
                l = mid+1;
            else
                r = mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size(), start = 0, end = n-1, mid,prev, nxt;
        while(start<=end){
            if(nums[start]<=nums[end]){
                mid = start;
                break;
            }
            mid = start + (end-start)/2;
            prev = (mid+n-1)%n;
            nxt = (mid+1)%n;
            // cout<<start<<" "<<mid<<" "<<end<<"\n";
            if(nums[mid]<=nums[nxt] && nums[mid]<=nums[prev])
                break;
            else if(nums[start] <= nums[mid])
                start = mid+1;
            else
                end = mid-1;
        }
        // cout<<mid<<"\n";
        //mid is pivot
        int ans = bs(nums, target, 0, mid-1);
        if(ans==-1)
            ans = bs(nums, target, mid, n-1);
        return ans;
    }
};
```
