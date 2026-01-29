#include <stdio.h>

int main() {
    long codeword;
    int ones = 0, choice, bit;

    printf("Enter received codeword: ");
    scanf("%ld", &codeword);

    long temp = codeword;
    while (temp > 0) {
        bit = temp % 10;
        if (bit == 1)
            ones++;
        temp /= 10;
    }

    printf("Number of 1's = %d", ones);

    printf("\nChoose Parity (0-Even, 1-Odd): ");
    scanf("%d", &choice);

    if ((choice == 0 && ones % 2 == 0) ||
        (choice == 1 && ones % 2 == 1)) {

        printf("\nAccepted");
        printf("\nOriginal Dataword: %ld", codeword / 10);
    } 
    else {
        printf("\nRejected / Wrong codeword received");
    }

    return 0;
}
