#include <stdio.h>
#include <ctype.h>
#include <string.h>
void toggleCase(char *str)
{
    while (*str)
    {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Original string: %s", str);
    toggleCase(str);
    printf("Toggled string: %s\n", str);
    return 0;
}
