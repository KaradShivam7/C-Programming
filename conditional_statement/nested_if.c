#include <stdio.h>

int main() {
    int n = 0;
    if(n >= 0) {
        if(n == 0)
            printf("Number is zero");
        else
            printf("Number is positive");
    } else {
        printf("Number is negative");
    }
    return 0;
}
