#include <stdio.h>
#include <string.h>

int main() {
    char codeword[100], gen[50], temp[100];
    int i, j, cw_len, g_len;

    printf("Enter codeword: ");
    scanf("%s", codeword);

    printf("Enter generator polynomial: ");
    scanf("%s", gen);

    cw_len = strlen(codeword);
    g_len = strlen(gen);

    for (i = 0; i < cw_len; i++) {
        temp[i] = codeword[i];
    }
    temp[cw_len] = '\0';

    for (i = 0; i <= cw_len - g_len; i++) {
        if (temp[i] == '1') {
            for (j = 0; j < g_len; j++) {
                temp[i + j] = (temp[i + j] == gen[j]) ? '0' : '1';
            }
        }
    }

    int error = 0;
    for (i = cw_len - g_len + 1; i < cw_len; i++) {
        if (temp[i] == '1') {
            error = 1;
            break;
        }
    }

    if (error == 0) {
        printf("No error detected\n");
        printf("Original data: ");
        for (i = 0; i < cw_len - g_len + 1; i++)
            printf("%c", codeword[i]);
        printf("\n");
    } else {
        printf("Error detected in received data\n");
    }

    return 0;
}