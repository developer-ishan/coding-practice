FIND FIRST AND LAST POSITIONS OF AN ELEMENT IN A SORTED ARRAY:

Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example:

Input : arr[] = {1, 3, 5, 5, 5, 5 ,67, 123, 125}  
 x = 5
Output : First Occurrence = 2
Last Occurrence = 5

https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

```cpp
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}

```

```cpp
int last(int arr[], int low, int high, int x, int n)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}
```
