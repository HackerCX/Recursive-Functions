#include <stdio.h>

int fact(int n){
    if(n <= 0) return 1;
    return n * fact(n-1);
}

int main(){
    int n = 0;
    scanf("%d",&n);
    printf("%d", fact(n));
    return 0;
}
