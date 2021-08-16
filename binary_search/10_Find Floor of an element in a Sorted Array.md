# Find Floor of an element in a Sorted Array

Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x. Write efficient functions to find floor of x.

Example:

Input : arr[] = {1, 2, 8, 10, 10, 12, 19}, x = 5
Output : 2
2 is the largest element in arr[] smaller than 5.

https://www.geeksforgeeks.org/floor-in-a-sorted-array/

(element which is just less than x)

```cpp
int findFloor(vector<long long> a, long long n, long long x){

        int start = 0, end = n-1, mid;
        long long result=-1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(a[mid]==x){
                return mid;
            }
            else if(a[mid]<x){
                result = mid;
                start = mid+1;
            }
            else
                end = mid-1;
        }
        return result;
    }
```
