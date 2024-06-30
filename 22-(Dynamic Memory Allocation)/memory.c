// Allocate and de-allocate memory for int, char and float variable at run time.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *intv;
    char *charv;
    float *floatv;
    intv = (int *)malloc(sizeof(int));
    if (intv == NULL)
    {
        printf("memory allocation for int faild");
    }
    charv = (char *)malloc(sizeof(char));
    if (charv == NULL)
    {
        printf("memory allocation for char faild");
    }
    floatv = (float *)malloc(sizeof(float));
    if (floatv == NULL)
    {
        printf("memory allocation for float faild");
        free(intv);
        free(charv);
    }
    printf("Memory allocation for int,char,float variables succeeded");
    free(intv);
    free(charv);
    free(floatv);
}