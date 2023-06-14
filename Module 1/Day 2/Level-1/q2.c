#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size)
{
    char *charPtr1 = (char *)ptr1;
    char *charPtr2 = (char *)ptr2;

    for (size_t i = 0; i < size; i++)
    {
        char temp = charPtr1[i];
        charPtr1[i] = charPtr2[i];
        charPtr2[i] = temp;
    }
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    double pi = 3.14159;
    double e = 2.71828;
    printf("Before swap: pi = %lf, e = %lf\n", pi, e);
    swap(&pi, &e, sizeof(double));
    printf("After swap: pi = %lf, e = %lf\n", pi, e);
    return 0;
}
