#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    int seg, len, count;
    printf("Enter a string of 0's and 1's: ");
    scanf("%s", str);
    printf("Enter segment length: ");
    scanf("%d", &seg);
    len = strlen(str);
    while (len % seg != 0) {
        for (int i = len; i > 0; i--) {
            str[i] = str[i - 1];
        }
        str[0] = '0';
        len++;
        str[len] = '\0';
    }
    for (int i = 0; i < len; i += seg) {
        count = 0;
        printf("Segment: ");
        for (int j = i; j < i + seg; j++) {
            printf("%c", str[j]);
            if (str[j] == '1')
                count++;
        }
        printf("  -> Number of 1's: %d\n", count);
    }
    return 0;
}
