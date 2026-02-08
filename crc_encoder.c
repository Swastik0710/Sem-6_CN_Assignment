#include <stdio.h>
#include <string.h>

int main() {
    char data[100], gen[100], dividend[200], codeword[200];

    printf("Enter the dataword: ");
    scanf("%s", data);

    printf("Enter the coefficients of generator polynomial: ");
    scanf("%s", gen);

    int datalen = strlen(data);
    int genlen = strlen(gen);

    for (int i = 0; i < datalen; i++) {
        dividend[i] = data[i];
    }

    for (int i = 0; i < genlen - 1; i++) {
        dividend[datalen + i] = '0';
    }

    dividend[datalen + genlen - 1] = '\0';

    printf("Updated dividend: %s\n", dividend);

    for (int i = 0; i <= (datalen + genlen - 1) - genlen; i++) {
        if (dividend[i] == '1') {
            for (int j = 0; j < genlen; j++) {
                if (dividend[i + j] == gen[j])
                    dividend[i + j] = '0';
                else
                    dividend[i + j] = '1';
            }
        }
    }

    for (int i = 0; i < datalen; i++) {
        codeword[i] = data[i];
    }

    for (int i = 0; i < genlen - 1; i++) {
        codeword[datalen + i] = dividend[datalen + i];
    }

    codeword[datalen + genlen - 1] = '\0';

    printf("The codeword is: %s\n", codeword);

    return 0;
}
