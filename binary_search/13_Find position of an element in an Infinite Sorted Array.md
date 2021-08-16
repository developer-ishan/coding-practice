# Find position of an element in an Infinite Sorted Array

```cpp
int low = 0;
int high = 1;
while(key>arr[high]){
    low = high;
    high*=2;
}
return bs(arr, low, high);
```
