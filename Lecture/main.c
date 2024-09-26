#include <stdio.h>
#include "calculator.h"

enum operations
{
    Add = 1,
    Substract,
    Multiply,
    Divide
};

int main()
{
    int firstOperand;

    int secondOperand;

    int operation;

    do
    {
        puts("\n\n-----Welcome-----\nEnter first number: ");

        scanf("%d", &firstOperand);

        puts("\nEnter second number: ");

        scanf("%d", &secondOperand);

        puts("\nSelect operation: \n\n1 to Add\n2 to Substract\n3 to multiply\n4 to divide\n-1 to exit");

        scanf("%d", &operation);

        if (operation == Add)
        {
            printf("\nResult: %d", AddNumbers(firstOperand, secondOperand));
        }
        else if (operation == Substract)
        {
            printf("\nResult: %d", SubstractNumbers(firstOperand, secondOperand));
        }
        else if (operation == Multiply)
        {
            printf("\nResult: %d", MultiplyNumbers(firstOperand, secondOperand));
        }
        else if (operation == Divide)
        {
            printf("\nResult: %d", DivideNumbers(firstOperand, secondOperand));
        }
    } while (operation != -1);

    return 0;
}