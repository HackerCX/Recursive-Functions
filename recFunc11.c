#include <stdio.h>

void binary_representation(int n) {
    if (n > 1) {
        binary_representation(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    scanf("%d", &num);
    binary_representation(num);
    printf("\n");

    return 0;
}

