#include <stdio.h>

void checkPrime(int n) {
    int i, flag = 1;

    if (n <= 1)
        flag = 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Prime number");
    else
        printf("Not a prime number");
}

int main() {
    int num;
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}
