#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];  // Increased buffer size to hold longer input

    printf("Enter a string: ");
    scanf("%99s", str);  // Read input, up to 99 characters to avoid buffer overflow

    printf("The string in upper case is:\n");
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));  // Use toupper from ctype.h for clarity
    }
    printf("\n");

    return 0;
}
