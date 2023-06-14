#include <stdio.h>
int bit_operations(int num, int oper_type, int pos)
{
    int result;
    switch (oper_type)
    {
    case 1: 
        result = num | (0x3 << pos);
        break;
    case 2: 
        result = num & (~(0x7 << pos));
        break;
    case 3: 
        result = num ^ (1 << 31);
        break;
    default:
        printf("Invalid operation type\n");
        result = num; 
        break;
    }
    return result;
}
int main()
{
    int num, oper_type, pos;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    printf("Enter the position: ");
    scanf("%d", &pos);
    int result = bit_operations(num, oper_type, pos);
    printf("Result: %d\n", result);
    return 0;
}
