//  Input a string in character array and print string and length of string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("The string is: %s\n", str);
    printf("The length of the string is: %d\n", len);
}