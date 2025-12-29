#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num, result;
    scanf("%d", &num);
    result = square(num);
    printf("Square = %d", result);
    return 0;
}
