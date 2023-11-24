// Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include <stdio.h>
struct student
{
    char name[20];
    float percentage;
    int age;
};

void main()
{
    struct student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name : ");
        scanf("%s", s[i].name);
        printf("Enter percentage :  ");
        scanf("%f", &s[i].percentage);
        printf("Enter age : ");
        scanf("%d", &s[i].age);
    }
    for (i = 0; i < 5; i++)
    {
        printf("name=%s\n", s[i].name);
        printf("percentage=%f\n", s[i].percentage);
        printf("age=%d\n", s[i].age);
    }
}