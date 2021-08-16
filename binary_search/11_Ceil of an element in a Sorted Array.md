# Ceil of an element in a Sorted Array

Given a sorted array and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x. Assume than the array is sorted in non-decreasing order. Write efficient functions to find floor and ceiling of x.

Examples :

For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
For x = 0: floor doesn't exist in array, ceil = 1
For x = 1: floor = 1, ceil = 1
For x = 5: floor = 2, ceil = 8
For x = 20: floor = 19, ceil doesn't exist in array

```cpp
int findCeil(vector<long long> a, long long n, long long x){

        int start = 0, end = n-1, mid;
        long long result=-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(a[mid]==x){
                return mid;
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
