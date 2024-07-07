//Implement linear search and binary search using recursion.

#include <stdio.h>

// Function for linear search using recursion
int linear_search_recursive(int arr[], int size, int key, int index) {
    //  the key is not found
    if (index == size) {
        return -1;
    }
    // If the element at the current index is the key, return the index
    if (arr[index] == key) {
        return index;
    }
    // Move to the next index
    return linear_search_recursive(arr, size, key, index + 1);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = linear_search_recursive(arr, size, key, 0);
    if (result != -1) {
        printf("Linear Search: Element %d found at index %d\n", key, result);
    } else {
        printf("Linear Search: Element %d not found\n", key);
    }
    return 0;
}

