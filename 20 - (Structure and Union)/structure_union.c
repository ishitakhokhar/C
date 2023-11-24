//  Demonstrate difference between structure and union.
#include <stdio.h>
struct student
{
    char name[100];
    int age;
};
union info
{
    int rollno;
    float marks;
};

void main()
{
    printf("Size of struct student:%d", sizeof(struct student));
    printf("size of union info:%d", sizeof(union info));
}