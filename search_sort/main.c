#include <stdio.h>

int *LinearSearch(int *arr, int length, int target)
{
    int *start;

    int *end = start + length;

    for (start = arr; start < end; start++)
    {
        if (*start == target)
        {
            return start;
        }
    }

    return NULL;
}

void InsertionSort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        int insertValue = *(arr + i);

        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (insertValue < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = insertValue;
    }
}

void OddEvenInsertionSort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        int insertValue = *(arr + i);

        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (insertValue < arr[j] && insertValue % 2 == arr[j] % 2)
            {
                arr[j + 1] = arr[j];
            }
            else if (insertValue % 2 < arr[j] % 2)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = insertValue;
    }
}

int main()
{
    int arr[] = {7, 3, 5, 4, 2, 6};

    int len = sizeof(arr) / sizeof(arr[0]);

    OddEvenInsertionSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}