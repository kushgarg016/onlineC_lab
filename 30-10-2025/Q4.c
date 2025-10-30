// 4) WAP to count no of character and no of words in a file.

#include <stdio.h>

int main()
{
    FILE *fp;              
    char filename[50];     
    char ch;
    int charCount = 0;     
    int wordCount = 0;     
    int inWord = 0;        

    printf("Enter the file name: ");
    scanf("%s", filename);

   
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 0;
    }

   
    while ((ch = fgetc(fp)) != EOF)
    {
        charCount++;  

        
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0; 
        }
        else if (inWord == 0)
        {
            inWord = 1;  
            wordCount++;
        }
    }

    printf("\nTotal characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);

    fclose(fp);  
    return 0;
}
