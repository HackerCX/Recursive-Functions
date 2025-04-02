#include <stdio.h>

int sumOfDigits(int num){
    if(num == 0) return 0;
    return num % 10 + sumOfDigits(num / 10);
}

int main(){
    int n =0;
    scanf("%d", &n);
    printf("%d", sumOfDigits(n));
    return 0;
}
