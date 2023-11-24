// Demonstrate nested structure.
#include <stdio.h>
struct address
{
    char HouseNo[25];
    char City[25];
};
struct student
{
    char name[25];
    int rollno;
    float cpi;
    struct address add;
};

void main()
{
    int i;
    struct student s;
    printf("\n\tEnter student name : ");
    scanf("%s", s.name);
    printf("\n\tEnter student rollno : ");
    scanf("%d", &s.rollno);
    printf("\n\tEnter student cpi : ");
    scanf("%f", &s.cpi);
    printf("\n\tEnter student city : ");
    scanf("%s", s.add.City);
    printf("\n\tEnter student HouseNo : ");
    scanf("%s", s.add.HouseNo);
    printf("\nDetails of student : ");
    printf("\n\tStudent name : %s", s.name);
    printf("\n\tStudent rollno : %d", s.rollno);
    printf("\n\tStudent cpi : %f", s.cpi);
    printf("\n\tStudent city : %s", s.add.City);
    printf("\n\tStudent houseno : %s", s.add.HouseNo);
}
