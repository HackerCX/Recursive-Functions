#include <stdio.h>

int string_length(const char *str) {
    if (*str == '\0') return 0;
    return 1 + string_length(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of the string: %d\n", string_length(str));

    return 0;
}

