#include <stdio.h>

int main () {
    int number;
    
    scanf("%d", &number);
    
    int firstDigit = number / 1000;

    if (firstDigit % 2 == 0)
    {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
    return 0;
}