#include <stdio.h>

int findCharType(char ch)
{
    int type;
    if (ch >= 'A' && ch <= 'Z')
    {
        type = 1; 
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        type = 2; 
    }
    else if (ch >= '0' && ch <= '9')
    {
        type = 3;
    }
    else if (ch >= 32 && ch <= 126)
    {
        type = 4; 
    } 
     else
    {
        type = 5;
    }
      return type;
}
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int charType = findCharType(ch);
    switch (charType)
    {
    case 1:
        printf("Type: Uppercase letter\n");
        break;
    case 2:
        printf("Type: Lowercase letter\n");
        break;
    case 3:
        printf("Type: Digit\n");
        break;
    case 4:
        printf("Type: Printable symbol\n");
        break;
    case 5:
        printf("Type: Non-printable symbol\n");
        break;
    default:
        printf("Invalid character\n");
        break;
    }
    return 0;
}
