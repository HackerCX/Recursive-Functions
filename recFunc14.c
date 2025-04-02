#include <stdio.h>

int maxNum(int arr[],int size){
    if (size == 1) return arr[0];
    int max_rest = maxNum(arr, size - 1);
    return (arr[size - 1] > max_rest) ? arr[size - 1] : max_rest;
}

int minNum(int arr[], int size){
    if (size == 1) return arr[0];
    int min_rest = minNum(arr, size - 1);
    return (arr[size - 1] < min_rest) ? arr[size - 1] : min_rest;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum value is %d, Minimum value is %d", maxNum(arr,size),minNum(arr,size));
    return 0;
}

