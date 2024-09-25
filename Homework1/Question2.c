#include <stdio.h>

int isLowercase(char symbol)
{
    return symbol >= 'a' && symbol <= 'z';
}

int isUppercase(char symbol)
{
    return symbol >= 'A' && symbol <= 'Z';
}

int isDigit(char symbol)
{
    return symbol >= '0' && symbol<= '9';
}

int isWhitespace(char symbol)
{
    return symbol == ' ';
}

int main()
{
    char c;

    scanf("%c", &c);

    if (isLowercase(c))
    {
        printf("symbol is a lowercase letter");
    }
    else if (isUppercase(c))
    {
        printf("symbol is an uppercase letter");
    }
    else if (isDigit(c))
    {
        printf("symbol is a digit");
    }
    else if(isWhitespace(c))
    {
        printf("symbol is a whitespace");
    }

    return 0;
}