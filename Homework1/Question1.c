#include <stdio.h>
#include <limits.h>
#include <float.h>

#define unsignedTypeMin 0

int main()
{
#pragma region sizes
    printf("\nsize of char: %ld byte(s)\n", sizeof(char));
    printf("size of unsigned char: %ld byte(s)\n", sizeof(unsigned char));
    printf("size of short: %ld byte(s)\n", sizeof(short));
    printf("size of int: %ld byte(s)\n", sizeof(int));
    printf("size of unsigned int: %ld byte(s)\n", sizeof(unsigned int));
    printf("size of unsigned long: %ld byte(s)\n", sizeof(unsigned long));
    printf("size of float: %ld byte(s)\n", sizeof(float));
#pragma endregion

#pragma region minimumValues
    printf("\nminimum value of char: %d\n", CHAR_MIN);
    printf("minimum value of unsigned char: %d\n", unsignedTypeMin);
    printf("minimum value of short: %d\n", SHRT_MIN);
    printf("minimum value of int: %d\n", INT_MIN);
    printf("minimum value of unsigned int: %d\n", unsignedTypeMin);
    printf("minimum value of unsigned long: %d\n", unsignedTypeMin);
    printf("minimum value of float: %f\n", -FLT_MAX);
#pragma endregion

#pragma region maximumValues
    printf("\nmaximum value of char: %d\n", CHAR_MAX);
    printf("maximum value of unsigned char: %d\n", UCHAR_MAX);
    printf("maximum value of short: %d\n", SHRT_MAX);
    printf("maximum value of int: %d\n", INT_MAX);
    printf("maximum value of unsigned int: %u\n", UINT_MAX);
    printf("maximum value of unsigned long: %zu\n", ULONG_MAX);
    printf("maximum value of float: %f\n", FLT_MAX);
#pragma endregion

    return 0;
}