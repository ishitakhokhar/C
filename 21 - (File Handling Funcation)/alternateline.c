// Merge alternate lines from two files.
#include <stdio.h>
void main()
{
    FILE *file1, *file2, *newfile;
    char line[100], line2[100];
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL)
    {
        printf("Error opening file1.txt");
    }
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL)
    {
        printf("Error opening file2.txt");
    }
    newfile = fopen("newfile.txt", "w");
    if (newfile == NULL)
    {
        printf("Error opening newfile.txt");
    }
    while (fgets(line, sizeof(line), file1) != NULL || fgets(line2, sizeof(line2), file2) != NULL)
    {
        if (line[0] != '\0')
            ;
        {
            fputs(line, newfile);
        }
        if (line2[0] != '\0')
            ;

        {
            fputs(line2, newfile);
        }
    }
    printf("Alternate lines from file1.txt and file2.txt merged into newfile.txt");
    fclose(file1);
    fclose(file2);
    fclose(newfile);
}