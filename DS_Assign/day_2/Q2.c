/*
Modify selection sort, bubble sort and insertion sort functions to return number of passes and number of comparisons and print both in main function.
*/

#include <stdio.h>

void selectionSort(int arr[], int n, int *iterations, int *comparisons) {
    *iterations = 0;
    *comparisons = 0;
    for (int i = 0; i < n-1; i++) {
        (*iterations)++;
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            (*comparisons)++;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(int arr[], int n, int *iterations, int *comparisons) {
    *iterations = 0;
    *comparisons = 0;
    for (int i = 0; i < n-1; i++) {
        (*iterations)++;
        for (int j = 0; j < n-i-1; j++) {
            (*comparisons)++;
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n, int *iterations, int *comparisons) {
    *iterations = 0;
    *comparisons = 0;
    for (int i = 1; i < n; i++) {
        (*iterations)++;
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            (*comparisons)++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        if (j >= 0) {
            (*comparisons)++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {64, 25, 12, 22, 11};
    int arr2[] = {64, 25, 12, 22, 11};
    int arr3[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int iterations, comparisons;

    selectionSort(arr1, n, &iterations, &comparisons);
    printf("Selection Sort: \n");
    printf("Sorted array: \n");
    printArray(arr1, n);
    printf("Number of iterations: %d\n", iterations);
    printf("Number of comparisons: %d\n\n", comparisons);

    bubbleSort(arr2, n, &iterations, &comparisons);
    printf("Bubble Sort: \n");
    printf("Sorted array: \n");
    printArray(arr2, n);
    printf("Number of iterations: %d\n", iterations);
    printf("Number of comparisons: %d\n\n", comparisons);

    insertionSort(arr3, n, &iterations, &comparisons);
    printf("Insertion Sort: \n");
    printf("Sorted array: \n");
    printArray(arr3, n);
    printf("Number of iterations: %d\n", iterations);
    printf("Number of comparisons: %d\n\n", comparisons);

    return 0;
}
