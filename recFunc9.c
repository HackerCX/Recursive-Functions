#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return binary_search(arr, left, mid - 1, target);
    
    return binary_search(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    printf("Element found at index %d\n", binary_search(arr, size - 1, target));
    return 0;
}

