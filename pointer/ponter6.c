#include <stdio.h>

void update(int **p) {
    static int x = 100;
    *p = &x;
}

int main() {
    int *ptr = NULL;
    update(&ptr);
    printf("Value: %d\n", *ptr);
    return 0;
}
