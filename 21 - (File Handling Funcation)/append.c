// Append one file at the end of other.
#include <stdio.h>
void main()
{
    FILE *file1, *file2;
    char ch;
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL)
    {
        printf("Error opening file1.txt");
    }
    file2 = fopen("file2.txt", "a");
    if (file2 == NULL)
    {
        printf("Error opening file2.txt");
    }
    while ((ch = fgetc(file1)) != EOF)
        fputc(ch, file2);

    printf("contants of file1.txt appended to file2.txt");
    fclose(file1);
    fclose(file2);
}