#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 5, 30, 15};
    int smallest = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Smallest = %d", smallest);
    return 0;
}
