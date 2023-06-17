#include <stdio.h>
#include <math.h>
void getMax(int number){
    int maxNum = 0;
    int temp = number;

    for (int i = 0; i < 4; i++)
    {
        int newNum = (temp / (int)pow(10, i + 1)) * (int)pow(10, i) + (temp % (int)pow(10, i));
        if (newNum > maxNum)
        {
            maxNum = newNum;
        }
    }

    printf("The largest number obtained by deleting a single digit is: %d\n", maxNum);
}
int main()
{
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    getMax(number);
    return 0;
}
