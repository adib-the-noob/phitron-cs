#include <stdio.h>
#include <stdbool.h>

int main() {
    // int -> takes 4byte on memeory
    // float -> 4 byte 
    // char -> 1 byte
    char A = '#';
    float floatNumber = 2.43;
    int number1 = 23;
    bool adibBool = true;
    
    printf("%d\n", number1);
    // %d for integer

    // %f for float
    printf("%f\n", floatNumber);
    printf("%.3f\n", floatNumber);

    printf("%c\n", A);
    printf("%d\n", adibBool);
}