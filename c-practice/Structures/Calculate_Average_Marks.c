//Calculate average marks of each student.
#include <stdio.h>
typedef struct student
{
    int roll;
    char name[50];
    float marks1;
    float marks2;
    float marks3;
    float avg;
}std;
int main(){
    int n;
    printf("Enter the number of student whose data u want to store:");
    scanf("%d",&n);

    std s[n];

    for (int i = 0; i <n; i++)
    {
        printf("Enter the roll number of student %d:",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the name of student %d:",i+1);
        scanf(" %[^\n]s",s[i].name);
        printf("Enter the marks of physics of student %d:",i+1);
        scanf("%f",&s[i].marks1);
        printf("Enter the marks of chemistry of student %d:",i+1);
        scanf("%f",&s[i].marks2);
        printf("Enter the marks of maths of student %d:",i+1);
        scanf("%f",&s[i].marks3);
    }

    for (int i = 0; i <n; i++)
    {
        float a=(s[i].marks1+s[i].marks2+s[i].marks3)/3;
        s[i].avg=a;
    }
    
    printf("The final details:\n");
    printf("Roll no. Name                 Physics Chemistry Maths  Average Marks\n");
    for (int i = 0; i <n; i++)
    {
        printf("%-8d %-20s %-7.2f %-9.2f %-6.2f %.2f\n", s[i].roll, s[i].name, s[i].marks1, s[i].marks2, s[i].marks3, s[i].avg);
    }
    return 0;
}