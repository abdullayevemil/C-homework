#include <stdio.h>

struct Person
{
    char *name;

    int age;
};

void InsertionSort(struct Person *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        struct Person insertValue = *(arr + i);

        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (insertValue.age < arr[j].age)
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

void PrintPeople(struct Person *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("name = %s, age = %d\n", arr[i].name, arr[i].age);
    }
}

int main()
{
    struct Person person1 = {.age = 18, .name = "person1"};

    struct Person person2 = {.age = 5, .name = "person2"};

    struct Person person3 = {.age = 48, .name = "person3"};

    struct Person person4 = {.age = 28, .name = "person4"};

    struct Person person5 = {.age = 13, .name = "person5"};

    struct Person people[] = {person1, person2, person3, person4, person5};

    InsertionSort(people, sizeof(people) / sizeof(people[0]));

    PrintPeople(people, sizeof(people) / sizeof(people[0]));
}