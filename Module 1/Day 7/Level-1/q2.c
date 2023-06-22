#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    if (argc == 4 && strcmp(argv[1], "-u") == 0)
    {
        FILE *src, *dest;
        src = fopen(argv[2], "r");
        dest = fopen(argv[3], "w");
        if (src == NULL || dest == NULL)
        {
            printf("Error opening files.\n");
            return 1;
        }
        int ch;
        while ((ch = fgetc(src)) != EOF)
        {
            fputc(toupper(ch), dest);
        }
        fclose(src);
        fclose(dest);
    }
    else if (argc == 4 && strcmp(argv[1], "-l") == 0)
    {
        FILE *src, *dest;
        src = fopen(argv[2], "r");
        dest = fopen(argv[3], "w");
        if (src == NULL || dest == NULL)
        {
            printf("Error opening files.\n");
            return 1;
        }
        int ch;
        while ((ch = fgetc(src)) != EOF)
        {
            fputc(tolower(ch), dest);
        }
        fclose(src);
        fclose(dest);
    }
    else if (argc == 4 && strcmp(argv[1], "-s") == 0)
    {
        FILE *src, *dest;
        src = fopen(argv[2], "r");
        dest = fopen(argv[3], "w");
        if (src == NULL || dest == NULL)
        {
            printf("Error opening files.\n");
            return 1;
        }
        int ch;
        int isFirstChar = 1;
        while ((ch = fgetc(src)) != EOF)
        {
            if (isFirstChar && isalpha(ch))
            {
                ch = toupper(ch);
                isFirstChar = 0;
            }
            else if (!isFirstChar && isalpha(ch))
            {
                ch = tolower(ch);
            }
            else if (ch == '.' || ch == '?' || ch == '!')
            {
                isFirstChar = 1;
            }
            fputc(ch, dest);
        }
        fclose(src);
        fclose(dest);
    }
    else
    {
        FILE *src, *dest;
        src = fopen(argv[1], "r");
        dest = fopen(argv[2], "w");
        if (src == NULL || dest == NULL)
        {
            printf("Error opening files.\n");
            return 1;
        }
        int ch;
        while ((ch = fgetc(src)) != EOF)
        {
            fputc(ch, dest);
        }
        fclose(src);
        fclose(dest);
    }
    return 0;
}
