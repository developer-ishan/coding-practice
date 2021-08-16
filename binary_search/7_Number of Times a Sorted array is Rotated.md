Find the Rotation Count in Rotated Sorted array
Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.

Examples:

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after
rotating the initial array twice.

Input : arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15};
Output: 0

https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/

- no of rotations = index of minimum element
- find min element using binary search

```cpp
int start = 0;
int end = n-1;
int mid;
while(start<=end){
    mid = start + (end-start)/2;
    prev = (mid+n-1)%n;
    nxt = (mid+1)%n;
    if(a[mid]<=a[nxt] && a[mid]<=a[prev])
        return mid;
    if(a[start] <= a[mid] ){
        //right part is unsorted
        //move there
        start = mid+1;
    } else{
        end = mid-1;
    }
}
```
