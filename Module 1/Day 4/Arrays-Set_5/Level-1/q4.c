#include <stdio.h>

void getSumOfEvenAndOdd(int arr[], int n)
{
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }
    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);
}

int main()
{
    int n;
    printf("Enter the size of Array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the arr[%d] element:", i);
        scanf("%d", &arr[i]);
    }
    getSumOfEvenAndOdd(arr, n);
    return 0;
}
