// 2) WAP to read the content of a file and display them in proper format.

#include <stdio.h>

int main()
{
    FILE *fp;           
    char filename[50];  
    char ch;

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 0;
    }

    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);  
    }

    printf("\n--- End of File ---\n");

    fclose(fp);  
    return 0;
}
