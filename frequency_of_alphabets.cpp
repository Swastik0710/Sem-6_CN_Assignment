#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string of alphabets: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Frequency of %c is %d.\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
