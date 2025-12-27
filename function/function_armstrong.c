#include <stdio.h>

void checkArmstrong(int n) {
    int sum = 0, temp = n, digit;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}

int main() {
    int num;
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}
