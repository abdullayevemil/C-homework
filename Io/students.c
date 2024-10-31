#include <stdio.h>
#include <string.h>

int main()
{
    int studentsCount = 5;

    char name[100];

    char surname[100];

    int grade;

    FILE* studentsList = fopen("students.txt", "w");

    for (int i = 1; i <= studentsCount; i++)
    {
        printf("Enter student name, surname, and grade:\n");

        scanf("%s %s %d", name, surname, &grade);

        fprintf(studentsList, "Name: %s Surname: %s Grade: %d\n", name, surname, grade);
    }

    fclose(studentsList);

    studentsList = fopen("students.txt", "r");

    char highestName[100];

    char highestSurname[100];

    int maximumGrade = 0;

    while(fscanf(studentsList, "Name: %s Surname: %s Grade: %d\n", name, surname, &grade) != EOF)
    {
        if (maximumGrade < grade)
        {
            strcpy(highestName, name);

            strcpy(highestSurname, surname);

            maximumGrade = grade;
        }
    }

    printf("Highest grade: %s %s, %d points", highestName, highestSurname, maximumGrade);

    return 0;
}