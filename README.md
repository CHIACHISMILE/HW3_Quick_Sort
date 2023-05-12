# HW3_Quick_Sort
Taipei Medical University DataStructure&Algorithm B812109032 醫工三 許家齊

## HW3 description

請用自己熟悉的程式語言實作課堂上說明的快速排序（Quick Sort）演算法。語言不限。以下為程式需求。

1. 請用這次上課講義中的範例作為demo：
33, 67, 8, 13, 54, 119, 3, 84, 25, 41

2. 請「不要」用程式語言的排序功能，自己寫出排序的程式碼。

3. 雖然不限制如何開發，但使用遞迴（Recursion）進行開發應該是最簡單的。

3. 請將程式上傳到github，並用任何方法告訴我github網址以及執行結果。

4. 註解與結構化程式碼有加分。

5. 再執行結果中印出排序過程也有額外加分。

## Quick Sort in C

This is a simple implementation of the quicksort algorithm in C language. The quick_sort function takes an array of integers and sorts it in ascending order using the quicksort algorithm.

## Usage

To use this implementation of quicksort, simply include the quick_sort function in your C program and call it with the following arguments:

``` c
quick_sort(arr, low, high);
```
where arr is the array to be sorted, low is the starting index of the array, and high is the ending index of the array.

For example, to sort an array arr of size n, you can use the following code:

[HW3_Quick_sort.c](HW3_Quick_sort.c)
```c
#include <stdio.h>

void quick_sort(int arr[], int low, int high);

int main() {
    int arr[] = {33, 67, 8, 13, 54, 119, 3, 84, 25, 41};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```
## Algorithm

The quicksort algorithm is a divide-and-conquer algorithm that works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

The partition function selects the last element of the array as the pivot and rearranges the elements of the array such that all the elements smaller than the pivot are to the left of it and all the elements greater than the pivot are to the right of it. It then returns the index of the pivot.

The quick_sort function uses the partition function to find the index of the pivot and recursively calls itself with the left and right subarrays until the subarrays have only one element or are empty.

## Result

```
Sorted array: 3 8 13 25 33 41 54 67 84 119
```
