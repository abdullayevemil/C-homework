#include <stdio.h>
#include <string.h>

int isPalindrome(char *original_string)
{
    int len = strlen(original_string);
    for (int i = 0, j = len - 1; i < len / 2;)
    {
        if (original_string[i] != ' ' && original_string[i] != ',' && original_string[i] != '.' && original_string[i] != '`')
        {
            if (original_string[j] != ' ' && original_string[j] != ',' && original_string[j] != '.' && original_string[j] != '`')
            {
                if (original_string[i] != original_string[j])
                {
                    return 0;
                }

                j--;

                i++;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }

    return 1;
}

int main()
{
    char original_string[] = "a man, a plan, a canal, anama";

    if (isPalindrome(original_string))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
}