#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;

    printf("Value of a = %d\n", a);
    printf("Value using *p = %d\n", *p);
    printf("Value using **q = %d\n", **q);

    return 0;
}
