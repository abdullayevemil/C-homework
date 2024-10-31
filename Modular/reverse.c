#include <stdio.h>

int reverse(int number)
{
    int reversedNumber = 0;

    while (number)
    {
        reversedNumber = reversedNumber * 10 + number % 10;

        number /= 10;
    }

    return reversedNumber;
}

int isPowerOfTwo(int number)
{
    return !(number & (number - 1));
}

int divide(int dividend, int divisor)
{
    
}

int factorial(int n)
{
    int result = 1;

    int i = 0;

    while (i++ < n)
    {
        result *= i;
    }

    return result;
}

int main()
{
    // printf("%d\n", isPowerOfTwo(16));

    // printf("%d\n", isPowerOfTwo(12));

    // printf("%d\n", isPowerOfTwo(3));

    // printf("%d\n", isPowerOfTwo(8));

    printf("%d\n", divide(18, 2));
    printf("%d\n", divide(18, 3));
    printf("%d\n", divide(18, 6));
    printf("%d\n", divide(18, 9));
}