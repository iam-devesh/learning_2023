#include <stdio.h>
int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int totalSetBits(int arr[], int size)
{
    int totalBits = 0;
    for (int i = 0; i < size; i++)
    {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i);
        scanf("%x", &arr[i]);
    }
    int result = totalSetBits(arr, size);
    printf("Total number of set bits: %d\n", result);
    return 0;
}
