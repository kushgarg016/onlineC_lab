//Write a program in C to count the total number of words in a string./

#include <stdio.h>
#include <string.h>
    int main()
{
    char str[100];
    int i,total_words=1;

    printf("Enter a string = ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            total_words++;
        }
    }

    printf("Total number of words = %d",total_words);

    return 0;
}
