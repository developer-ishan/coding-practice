# Searching in a Nearly Sorted Array

SEARCH IN A NEARLY SORTED ARRAY:

Given an array which is sorted, but after sorting some elements are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1]. Write an efficient function to search an element in this array. Basically the element arr[i] can only be swapped with either arr[i+1] or arr[i-1].

For example consider the array {2, 3, 10, 4, 40}, 4 is moved to next position and 10 is moved to previous position.

Example :
Input: arr[] = {10, 3, 40, 20, 50, 80, 70}, key = 40
Output: 2
Output is index of 40 in given array

https://www.geeksforgeeks.org/search-almost-sorted-array/

```cpp
while(start<=end){
    mid = start + (end-start)/2;
    if(a[mid]==x)
        return mid;
    if(mid-1>=start && a[mid-1]==x)
        return mid-1;
    if(mid+1<=end && a[mid+1]==x)
        return mid+1;
    if(a[mid]>x)
        end = mid-2;
    else
        start = mid+2;
}
```
