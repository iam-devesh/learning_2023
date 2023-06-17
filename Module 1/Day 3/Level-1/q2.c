#include <stdio.h>
void getBits(int num)
{
    int i;
    unsigned int mask = 1 << 31;
    for (i = 0; i < 32; i++)
    {
        if (num & mask)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask = mask >> 1;
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    getBits(num);
    return 0;
}
