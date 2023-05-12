#include <stdio.h>

// Swaps two integer values
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partitions the array around a pivot element
int partition(int arr[], int low, int high) {
    // Select the last element as the pivot
    int pivot = arr[high];
    // Initialize the index of the smaller element
    int i = low - 1;
    // Iterate over the array
    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] < pivot) {
            // Increment the index of the smaller element
            i++;
            // Swap the current element with the element at the smaller index
            swap(&arr[i], &arr[j]);
        }
    }
    // Swap the pivot with the element at the next index of the smaller element
    swap(&arr[i + 1], &arr[high]);
    // Return the index of the pivot
    return (i + 1);
}

// Sorts the array using the quicksort algorithm
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // Find the index of the pivot element
        int pivot_index = partition(arr, low, high);
        // Recursively sort the left and right subarrays
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}

// Test the quicksort function
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
