#include <stdio.h>

struct Duration
{
    int hours;

    int minutes;

    int seconds;
};

struct Movie
{
    char* name;

    char* genre;

    struct Duration duration;
};

void InsertionSort(struct Movie *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        struct Movie insertValue = *(arr + i);

        int j;

        for (j = i - 1; j >= 0; j--)
        {
            if (insertValue.duration.hours < arr[j].duration.hours)
            {
                arr[j + 1] = arr[j];
            }
            else if (insertValue.duration.hours == arr[j].duration.hours && insertValue.duration.minutes < arr[j].duration.minutes)
            {
                arr[j + 1] = arr[j];
            }
            else if (insertValue.duration.hours == arr[j].duration.hours && insertValue.duration.minutes == arr[j].duration.minutes && insertValue.duration.seconds < arr[j].duration.seconds)
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

void PrintMovies(struct Movie *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("name = %s, genre = %s, duration=%d:%d:%d\n", arr[i].name, arr[i].genre, arr[i].duration.hours, arr[i].duration.minutes, arr[i].duration.seconds);
    }
}

int main()
{
    struct Duration duration1 = {.hours = 1, .minutes = 55, .seconds = 47};
    
    struct Duration duration2 = {.hours = 1, .minutes = 30, .seconds = 45};
    
    struct Duration duration3 = {.hours = 4, .minutes = 5, .seconds = 4};
    
    struct Duration duration4 = {.hours = 2, .minutes = 30, .seconds = 25};
    
    struct Duration duration5 = {.hours = 2, .minutes = 7, .seconds = 15};

    struct Movie Movie1 = {.name="Se7en", .genre = "mistery", .duration = duration1};
    
    struct Movie Movie2= {.name="Whiplash", .genre = "musical", .duration = duration2};
    
    struct Movie Movie3 = {.name="Lotr", .genre = "action", .duration = duration3};
    
    struct Movie Movie4 = {.name="Batman", .genre = "action", .duration = duration4};
    
    struct Movie Movie5 = {.name="Joker", .genre = "drama", .duration = duration5};

    struct Movie movies[] = {Movie1, Movie2, Movie3, Movie4, Movie5};

    InsertionSort(movies, sizeof(movies) / sizeof(movies[0]));

    PrintMovies(movies, sizeof(movies) / sizeof(movies[0]));
}