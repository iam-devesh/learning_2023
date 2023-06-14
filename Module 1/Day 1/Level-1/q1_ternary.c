#include <stdio.h>
int getMax(int num1, int num2)
{
    int max;
    max=(num1<num2)?num2:num1;
    return max;
}

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = getMax(num1, num2);
    printf("The biggest number is: %d\n", result);

    return 0;
}
