#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch = '1';
    int count = 0;

    printf("Enter a string of 0's and 1's: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Number of 1's present in the string is %d.\n", count);

    return 0;
}
