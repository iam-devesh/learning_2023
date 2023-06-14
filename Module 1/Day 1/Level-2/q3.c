#include <stdio.h>

int isVowel(char c)
{
    int result;
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        result = 1; 
        break;
    default:
        result = 0; 
        break;
    }
    return result;
}
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int isVowelResult = isVowel(ch);
    if (isVowelResult == 1)
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Not Vowel\n");
    }
    return 0;
}
