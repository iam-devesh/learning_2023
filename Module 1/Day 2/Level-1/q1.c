#include <stdio.h>

void printExponent(double x)
{
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long bits = *ptr;
    unsigned int exponent = (bits >> 52) & 0x7FF;

    printf("Exponent in Hexadecimal: 0x%03X\n", exponent);
    printf("Exponent in Binary: 0b");
    for (int i = 11; i >= 0; i--)
    {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}
int main()
{
    double x ;
    printf("Enter the value of X-");
    scanf("%lf",&x);
    printExponent(x);
    return 0;
}
