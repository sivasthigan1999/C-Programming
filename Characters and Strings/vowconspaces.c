#include <stdio.h>
int main() {
    char line[150];
    int vowels, digit, space;

    vowels = digit = space = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {  //strlen()
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if (line[i] >= '0' && line[i] <= '9') {
            ++digit;
        } else if (line[i] == ' ') {
            ++space;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Digits: %d\n", digit);
    printf("White spaces: %d\n", space);
    return 0;
}
