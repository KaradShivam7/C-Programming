#include <stdio.h>

int main() {
    int a[5], sum = 0;
    int *p = a;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(int i = 0; i < 5; i++)
        sum += *(p + i);

    printf("Sum = %d", sum);
    return 0;
}
