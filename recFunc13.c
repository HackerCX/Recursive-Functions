#include <stdio.h>

char first_uppercase(const char *str) {
    if (*str == '\0') return ' ';
    
    if (*str >= 'A' && *str <= 'Z') return *str;
    
    return first_uppercase(str + 1);
}

int main() {
    char str[100];
    scanf("%99s", str);
    char result = first_uppercase(str);
    printf("first uppercase is : %c\n", first_uppercase(str));
    return 0;
}

