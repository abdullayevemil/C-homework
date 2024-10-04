#include <stdio.h>

int digitsSum(int number)
{
    int sum = 0;

    while (number)
    {
        sum += number % 10;

        number /= 10;
    }

    return sum;
}

int (*numbers);

int fibonacci(int count)
{
    int previous = 0;

    int next = 1;

    while (count-- - 1)
    {
        int copy = previous;

        previous = next;

        next += copy; 
    }

    return next;
}

int fibonacciRecursion(int count)
{
    if (count < 2)
    {
        return count;
    }

    return fibonacciRecursion(count - 1) + fibonacciRecursion(count - 2);
}

void drawRightAngledTriangle(int rows)
{
    for(int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", '*');
        }

        puts("");
    }
}

void drawPyramid(int rows)
{
    for(int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("%c ", '*');
        }

        puts("");
    }
}

int main()
{
    // int number = 12345;

    // printf("%d", digitsSum(number));

    // int count = 10; // 0 1 1 2 3 5 8 13 21 34 55 89

    // printf("%d", fibonacci(count));

    //drawRightAngledTriangle(5);

    drawPyramid(5);
}