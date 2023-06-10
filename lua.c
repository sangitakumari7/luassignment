#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int i, j;
    char temp;
    int length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    reverseString(input);

    printf("Reversed string: %s\n", input);

    return 0;
}