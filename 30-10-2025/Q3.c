// 3) WAP to display the contents of a file line by line.
#include <stdio.h>

int main()
{
    FILE *fp;             
    char filename[50];    
    char line[200];       

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
 
    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 0;
    }

    printf("\n--- File Content ---\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);   
    }

    printf("\n--- End of File ---\n");

    fclose(fp);  
    return 0;
}
