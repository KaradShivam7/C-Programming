#include <stdio.h>

int main() {
    int n = 1234, rev = 0, rem;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d", rev);
    return 0;
}
