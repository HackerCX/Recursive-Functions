#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n =0;
    scanf("%d", &n);
    printf("%llu",fib(n));
    return 0;
}
