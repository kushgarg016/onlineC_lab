// 4) WAP to count no of character and no of words in a file.

#include <stdio.h>

int main()
{
    FILE *fp;              // file pointer
    char filename[50];     // to store file name
    char ch;
    int charCount = 0;     // to count characters
    int wordCount = 0;     // to count words
    int inWord = 0;        // flag to track inside a word

    printf("Enter the file name: ");
    scanf("%s", filename);

    // open the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 0;
    }

    // read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        charCount++;  // count every character

        // check for words
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;  // space or newline ends a word
        }
        else if (inWord == 0)
        {
            inWord = 1;  // start of a new word
            wordCount++;
        }
    }

    printf("\nTotal characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);

    fclose(fp);  // close the file
    return 0;
}
