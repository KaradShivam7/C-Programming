#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    printf("Address before increment: %p\n", p);
    p++;
    printf("Address after increment: %p\n", p);

    return 0;
}
