#include <stdio.h>

int main() {
    int n, bin[32], i = 0, ones = 0, choice;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp > 0) {
        bin[i] = temp % 2;
        if (bin[i] == 1)
            ones++;
        temp /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);

    printf("\nNumber of 1's = %d", ones);

    printf("\nChoose Parity (0-Even, 1-Odd): ");
    scanf("%d", &choice);

    int parity;

    if (choice == 0) {              // Even parity
        parity = (ones % 2 == 0) ? 0 : 1;
        printf("Even Parity Bit = %d", parity);
    } else {                        // Odd parity
        parity = (ones % 2 == 0) ? 1 : 0;
        printf("Odd Parity Bit = %d", parity);
    }

    printf("\nCodeword: %d", parity);
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);

    return 0;
}
