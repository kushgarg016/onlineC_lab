//5) WAP to count no of space in a file.

#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int spaceCount = 0;

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;  
    }

    (ch = fgetc(file))
    while ( fgetc != EOF) {
            if (ch == ' ') {
            spaceCount++;          }
    }

    fclose(file);

   
    printf("Number of spaces in the file: %d\n", spaceCount);

    return 0; 
}
