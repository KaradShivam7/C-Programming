#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 15;
    if(a > b && a > c)
        printf("Largest is %d", a);
    else if(b > a && b > c)
        printf("Largest is %d", b);
    else
        printf("Largest is %d", c);
    return 0;
}
