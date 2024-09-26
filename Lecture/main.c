#include <stdio.h>
#include "calculator.h"

enum operations
{
    Add,
    Substract,
    Multiply,
    Divide
};

int main()
{
    int firstOperand = 10;

    int secondOperand = 5;
  
    int operation = Add;

    if (operation == Add)
    {
        printf("%d", AddNumbers(firstOperand, secondOperand));
    }
    else if (operation == Substract)
    {
        printf("%d", SubstractNumbers(firstOperand, secondOperand));
    }
    else if (operation == Multiply)
    {
        printf("%d", MultiplyNumbers(firstOperand, secondOperand));
    }
    else if (operation == Divide)
    {
        printf("%d", DivideNumbers(firstOperand, secondOperand));
    }

    return 0;
}