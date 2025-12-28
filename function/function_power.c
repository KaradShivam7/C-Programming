#include <stdio.h>

int power(int base, int exp) {
    int i, result = 1;
    for (i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int main() {
    int b, e;
    scanf("%d %d", &b, &e);
    printf("Result = %d", power(b, e));
    return 0;
}
