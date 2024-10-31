#include <stdio.h>
#include <string.h>

int main()
{
    FILE *myFile = fopen("test.txt", "r");

    if (!myFile)
    {
        printf("Error");

        return -1;
    }

#pragma region WordsCount

    // char currentCharacter;

    // char previousCharacter = ' ';

    // int wordsCount = 0;

    // while((currentCharacter = getc(myFile)) != EOF)
    // {
    //     if((currentCharacter == ' ' || currentCharacter == '\t' || currentCharacter == '\n') && (previousCharacter != ' ' && previousCharacter != '\t'))
    //     {
    //         wordsCount++;
    //     }

    //     previousCharacter = currentCharacter;
    // }

    // wordsCount += previousCharacter != ' ' && previousCharacter != '\t' && previousCharacter != '\n';

    // printf("%d", wordsCount);

#pragma endregion

#pragma region UppercaseContent

    // char currentCharacter;

    // char uppercaseFileContent[100];

    // int index = 0;

    // while((currentCharacter = getc(myFile)) != EOF)
    // {
    //     if(currentCharacter >= 'a' && currentCharacter <= 'z')
    //     {
    //         currentCharacter += 'A' - 'a';
    //     }

    //     uppercaseFileContent[index++] = currentCharacter;
    // }

    // fclose(myFile);

    // myFile = fopen("test.txt", "w");

    // fputs(uppercaseFileContent, myFile);

#pragma endregion

#pragma region SwapCases

    // char currentCharacter;

    // char uppercaseFileContent[100];

    // int index = 0;

    // while((currentCharacter = getc(myFile)) != EOF)
    // {
    //     if(currentCharacter >= 'a' && currentCharacter <= 'z')
    //     {
    //         currentCharacter += 'A' - 'a';
    //     }
    //     else if(currentCharacter >= 'A' && currentCharacter <= 'Z')
    //     {
    //         currentCharacter += 'a' - 'A';
    //     }

    //     uppercaseFileContent[index++] = currentCharacter;
    // }

    // uppercaseFileContent[index] = '\0';

    // fclose(myFile);

    // myFile = fopen("test.txt", "w");

    // fputs(uppercaseFileContent, myFile);

#pragma endregion

#pragma region WordsCount

    // char currentCharacter;

    // char previousCharacter = ' ';

    // int wordCount = 0;

    // char word[100];

    // char target[] = "start";

    // int index = 0;

    // while((currentCharacter = getc(myFile)) != EOF)
    // {
    //     if((currentCharacter == ' ' || currentCharacter == '\t' || currentCharacter == '\n') && (previousCharacter != ' ' && previousCharacter != '\t'))
    //     {
    //         if(!strcmp(word, target))
    //         {
    //             wordCount++;
    //         }

    //         memset(word, 0, sizeof(word));

    //         index = 0;
    //     }
    //     else
    //     {
    //         word[index++] = currentCharacter;
    //     }

    //     previousCharacter = currentCharacter;
    // }

    // printf("%d", wordCount);

#pragma endregion

    char currentCharacter;

    char previousCharacter = ' ';

    const char *words[100];

    words[0] = "";

    int wordsCounts[100];

    char word[100];

    int index = 0;

    int wordIndex = 1;

    while ((currentCharacter = getc(myFile)) != EOF)
    {
        if ((currentCharacter == ' ' || currentCharacter == '\t' || currentCharacter == '\n') && (previousCharacter != ' ' && previousCharacter != '\t'))
        {
            int exists = 0;

            printf("%d\n", wordIndex);

            for (int i = 0; i < wordIndex; i++)
            {
                printf("%s\n", words[i]);
                if (!strcmp(words[i], word))
                {
                    wordsCounts[i]++;

                    exists = 1;
                }
            }

            if (!exists)
            {
                wordsCounts[wordIndex]++;

                words[wordIndex++] = word;
            }

            memset(word, 0, sizeof(word));

            index = 0;
        }
        else
        {
            word[index++] = currentCharacter;
        }

        previousCharacter = currentCharacter;
    }

    // for (int i = 0; i < wordIndex; i++)
    // {
    //     if (!strcmp(words[i], word))
    //     {
    //         wordsCounts[i] = index - 1;
    //     }
    //     else
    //     {
    //         wordsCounts[index] = index - 1;

    //         words[index++] = word;
    //     }
    // }

    printf("%d", wordIndex);

    for (int i = 1; i < wordIndex; i++)
    {
        printf("\n%s : %d\n", words[i], wordsCounts[i]);
    }

    fclose(myFile);

    return 0;
}