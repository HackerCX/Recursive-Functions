#include <stdio.h>

int prodOfDigits(int num){
    if(num <= 1) return 1;
    return num % 10 + prodOfDigits(num / 10);
}

int main(){
    int n =0;
    scanf("%d", &n);
    printf("%d", prodOfDigits(n));
    return 0;
}
