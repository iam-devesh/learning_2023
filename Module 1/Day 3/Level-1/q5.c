#include <stdio.h>

void getDigit(int number)
{
    if (number < 10)
    {
        printf("Not valid \n");
    }
    else
    {
        int digit, maxDigit, minDigit;
        maxDigit = -1;
        minDigit = 10;
        while (number != 0)
        {
            digit = number % 10;
            if (digit > maxDigit)
            {
                maxDigit = digit;
            }
            if (digit < minDigit)
            {
                minDigit = digit;
            }
            number /= 10;
        }

        printf("%d ", minDigit);
        printf("and %d\n", maxDigit);
    }
}
int main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d", &n);
    int arr[n];
    printf("Enter digits\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        getDigit(arr[i]);
    }
    return 0;
}
