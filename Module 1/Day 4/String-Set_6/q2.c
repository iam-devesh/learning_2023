#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int num = atoi(str);
    printf("String: %s", str);
    printf("Integer: %d\n", num);

    return 0;
}
