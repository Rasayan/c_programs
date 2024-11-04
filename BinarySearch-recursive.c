#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    } 
    else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    } 
    else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int arr[] = {2, 4, 7, 10, 23, 45, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
