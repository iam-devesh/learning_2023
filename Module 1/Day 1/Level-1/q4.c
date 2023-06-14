#include <stdio.h>
float readOperand(const char *prompt)
{
    float operand;
    printf("%s", prompt);
    scanf("%f", &operand);
    return operand;
}
char readOperator()
{
    char operator;
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    return operator;
}
float calculate(float operand1, char operator, float operand2)
{
    float result;
    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        if (operand2 != 0)
        {
            result = operand1 / operand2;
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
        return 0;
    }
    return result;
}
int main()
{
    float operand1, operand2, result;
    char operator;
    operand1 = readOperand("Enter Number 1: ");
    operator= readOperator();
    operand2 = readOperand("Enter Number 2: ");
    result = calculate(operand1, operator, operand2);
    printf("Result: %.2f\n", result);
    return 0;
}
