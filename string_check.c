#include <stdio.h>
int main()
{
    char str[100];
    int alpha = 1, digit = 1, binary = 1;
    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            alpha = 0;
        }
        if(!(str[i] >= '0' && str[i] <= '9'))
        {
            digit = 0;
        }
        if(str[i] != '0' && str[i] != '1')
        {
            binary = 0;
        }
    }

    if(alpha)
    {
        printf("The string contains only alphabets.\n");
    }
    else if(digit)
    {
        printf("The string contains only digits.\n");
    }
    else if(binary)
    {
        printf("The string contains only 0's and 1's.\n");
    }
    else
    {
        printf("It is a mixed string.\n");
    }

    return 0;
}
