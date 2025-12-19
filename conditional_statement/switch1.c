#include <stdio.h>

int main() {
    char grade = 'B';
    switch(grade) {
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Below Average"); break;
        case 'F': printf("Fail"); break;
        default: printf("Invalid Grade"); 
    }
    return 0;
}
