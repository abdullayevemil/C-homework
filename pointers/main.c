#include <stdio.h>
#include <string.h>

void ReverseString(char *str)
{
    int len = strlen(str);

    char *start;

    char *end = str + len - 1;

    for (start = str; start < end; start++, end--)
    {
        char temp = *start;

        *start = *end;

        *end = temp;
    }

    printf("%s", str);
}

void SwapArrays(int* arr1, int* arr2, int len)
{
    int* start1 = arr1;

    int* start2 = arr2;

    while (len--)
    {
        int temp = *start1;

        *start1 = *start2;

        *start2 = temp;

        start1++;

        start2++;
    }
}

void custom_strcpy(char* destination, char* value)
{
    char* start1 = destination;

    char* start2 = value;

    int len = strlen(value);

    while (len--)
    {
        *start1 = *start2;

        start1++;

        start2++;
    }

    *start1 = '\0';
}

void PrintArray(int* arr, int len)
{
    int *start;

    int *end = arr + len - 1;

    for (start = arr; start <= end; start++)
    {
        printf("%d ", *start);
    }
}

int main()
{
    // int arr1[] = {1, 2, 3};

    // int arr2[] = {4, 5, 6};

    // int len = sizeof(arr1) / sizeof(arr1[0]);

    // SwapArrays(arr1, arr2, len);

    // PrintArray(arr1, len);

    // printf("\n");

    // PrintArray(arr2, len);

    // char str1[1];

    // char str2[] = "Hi";

    // custom_strcpy(str1, str2);

    // printf("%s", str1);
}