#include <stdio.h>

int main() {
    int n = 1234, sum = 0, rem;
    while(n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
