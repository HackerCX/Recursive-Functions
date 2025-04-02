#include <stdio.h>

void printArr(int arr[], int size){
    if(size <= 0) return;
    printArr(arr, size - 1);
    printf("%d\n",arr[size -1]); 

}

int main(){
    int arr[4];
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printArr(arr, size);
    return 0;
}
