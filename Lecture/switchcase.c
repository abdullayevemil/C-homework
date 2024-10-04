#include <stdio.h>

int main()
{
    char c = 'a';

    switch (c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }

    int month = 1;

    switch (month)
    {
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn\n");
            break;
        break;
    default:
        printf("invalid month");
        break;
    }
}