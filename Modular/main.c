#include <stdio.h>
#include "calculator.h"

int main()
{
    int firstOperand = 10;

    int secondOperand = 5;

    printf("\nResult: %d", AddNumbers(firstOperand, secondOperand));

    printf("\nResult: %d", SubstractNumbers(firstOperand, secondOperand));
    
    printf("\nResult: %d", MultiplyNumbers(firstOperand, secondOperand));
    
    printf("\nResult: %d", DivideNumbers(firstOperand, secondOperand));

    return 0;
}