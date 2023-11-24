// Create, open and close a file.
#include <stdio.h>
void main()
{
    FILE *file;
    file = fopen("file2.text", "w");
    if (file == NULL)
    {
        printf("Error opening the file");
    }
    printf("File created and open successfully");
    fclose(file);
}