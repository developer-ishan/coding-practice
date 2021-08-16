Given an array of letters sorted in ascending order, find the smallest letter in the the array which is greater than a given key letter.

https://leetcode.com/problems/find-smallest-letter-greater-than-target/

```cpp
int solve(vector<long long> a, long long n, long long x){

        int start = 0, end = n-1, mid;
        long long result=-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(a[mid]==x){
                start = mid+1;
            }
            else if(a[mid]<x){

                start = mid+1;
            }
            else{
                result = mid;
                end = mid-1;
            }
        }
        return result;
    }
```
