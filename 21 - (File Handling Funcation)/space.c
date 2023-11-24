// Count chars, spaces, tabs and new lines in a file.
#include <stdio.h>
void main()
{
    FILE *file;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, newline = 0;
    file = fopen("file2.text", "r");
    if (file == NULL)
    {
        printf("Error");
    }
    while ((ch = fgetc(file)) != EOF)
    {
        chars++;
        if (ch == ' ')
        {
            spaces++;
        }
        if (ch == '\t')
        {
            tabs++;
        }
        else if (ch == '\n')
        {
            newline++;
        }
    }
    fclose(file);
    printf("NUmber of characters :%d\n", chars);
    printf("NUmber of space :%d\n", spaces);
    printf("NUmber of tabs :%d\n", tabs);
    printf("NUmber of newline :%d\n", newline);
}