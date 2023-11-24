//  Demonstrate structure pointer.
#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    float cpi;
};
void main()
{
    struct student *st, student1;
    st = &student1;
    printf("Enter name : ");
    scanf("%s", &st->name);
    printf("enter rollno : ");
    scanf("%d", &st->rollno);
    printf("Enter cpi : ");
    scanf("%f", &st->cpi);
    printf("\nstudents details\n");
    printf("Name:%s\n", st->name);
    printf("rollno:%d\n", st->rollno);
    printf("cpi:%f\n", st->cpi);
}