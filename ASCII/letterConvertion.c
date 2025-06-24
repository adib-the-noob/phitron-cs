#include <stdio.h>

int main() {
    char input_letter;
    scanf("%c", &input_letter);
    if (input_letter >= 'A' && input_letter <= 'Z')
    {
        char lowerCase = input_letter + 32;
        printf("%c\n", lowerCase);
    } else if (input_letter >= 'a' && input_letter <= 'z') {
        char upperCase = input_letter - 32; 
        printf("%c\n", upperCase);
    } else {
        printf("Not a Char\n");
    }
    return 0;
}