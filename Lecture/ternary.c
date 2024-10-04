#include <stdio.h>

int main()
{
    // int max;

    // int a = 5;
    
    // int b = 3;

    // max = a > b ? a : b;

    // int marks = 50;

    // marks >= 50 ? puts("pass") : puts("fail");

    // int totalAmount = 2000;

    // int discount = totalAmount > 1000 ? totalAmount * 0.1 : totalAmount * 0.05;

    // printf("\n%d", max);
    // printf("\n%d", discount);


    int score = 57;

    char grade = score >= 90 ? 'A' : score >= 80 ? 'B' : score >= 70 ? 'C' : score >= 60 ? 'D' : 'F';

    printf("%c", grade);
}