#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string of 0's and 1's: ");
    scanf("%s", str);

    int n = strlen(str);
    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < n; i += 2) {
        if (str[i] == '1') {
            count1++;
        }
    }

    printf("The number of 1's in every alternate position: %d\n", count1);

    for (int i = 1; i < n; i += 4) {
        if (str[i] == '1') {
            count2++;
        }
        if (str[i + 1] == '1') {
            count2++;
        }
    }

    printf("The number of 1's in every two alternate positions: %d\n", count2);

    for (int i = 3; i < n; i += 8) {
        for (int j = i; j < i + 4 && j < n; j++) {
            if (str[j] == '1') {
                count3++;
            }
        }
    }

    printf("The number of 1's in every four alternate positions: %d\n", count3);

    return 0;
}
