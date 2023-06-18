#include <stdio.h>
void getSumOfEvenAndOddIndex(int arr[], int n)
{
    int evenIndexSum = 0;
    int oddIndexSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenIndexSum += arr[i];
        }
        else
        {
            oddIndexSum += arr[i];
        }
    }
    printf("Sum of elements at even indices: %d\n", evenIndexSum);
    printf("Sum of elements at odd indices: %d\n", oddIndexSum);
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
    getSumOfEvenAndOddIndex(arr, n);
    return 0;
}
