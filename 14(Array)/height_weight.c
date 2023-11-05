//  Read five person height and weight and count the number of person having height greater than 170 and
//  weight less than 50.
#include <stdio.h>
void main()
{
    int i;
    int arr1[5], arr2[5];
    for (i = 1; i <= 5; i++)
    {
        printf("Enter height of %d in cm : ", i);
        scanf("%d", &arr1[i]);
        printf("Enter weight of %d in kg : ", i);
        scanf("%d", &arr2[i]);
    }
    int count = 0;
    for (i = 1; i <= 5; i++)
    {
        if (arr1[i] > 170 && arr2[i] < 50)
        {
            count = count + 1;
        }
    }
    printf("number of person = %d", count);
}