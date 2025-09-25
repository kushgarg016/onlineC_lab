//Find the longest word in a sentence./

#include <stdio.h>

int main() {
    char str[200];
    int i,maxLength=0,length=0,maxStart=0;

    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);

    for (i=0;str[i]!='\0';i++) 
    {
        if (str[i]!=' ' && str[i]!='\n') 
        {
            length++;
        } else {
            if (length>maxLength) 
            {
                maxLength=length;
                maxStart=i-length; 
            }
            length=0;  
        }
    }

    
    if (length > maxLength) 
    {
        maxLength = length;
        maxStart = 0;  
        for (i=0;str[i]!='\0';i++) 
        {
            if (str[i]!=' ' && str[i]!='\n') 
            {
                length--;
                if (length==0) 
                {
                    maxStart=i-maxLength+1;
                    break;
                }
            }
        }
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) 
    {
        printf("%c", str[i]);
    }
    printf("\nLength of longest word: %d\n", maxLength);

    return 0;
}
