
//Implement linear search and binary search using recursion.


#include <stdio.h>

// Function for binary search using recursion
int binary_search_recursive(int arr[], int key, int low, int high) {
    // Base case: If low is greater than high, the key is not found

    if (low > high) {
        return -1;
    }

    // Find the middle index
    int mid = (low + high) / 2;

    // If the element at mid is the key, return mid
    if (arr[mid] == key) {
        return mid;
    }

    // If the key is less than the element at mid, search the left half
    if (key < arr[mid]) {
        return binary_search_recursive(arr, key, low, mid - 1);
    }
    
    // If the key is greater than the element at mid, search the right half
    return binary_search_recursive(arr, key, mid + 1, high);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search_recursive(arr, key, 0, size - 1);
    if (result != -1) {
        printf("Binary Search: Element %d found at index %d\n", key, result);
    } else {
        printf("Binary Search: Element %d not found\n", key);
    }
    return 0;
}
