//Search a student by roll number.
#include <stdio.h>
typedef struct student
{
    int roll;
    char name[50];
    float marks;
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
        printf("Enter the marks of student %d:",i+1);
        scanf("%f",&s[i].marks);
    }

    int f;
    printf("\nEnter the roll number of student whose detail u want:");
    scanf("%d",&f);

    int found=0;
    for (int i = 0; i <n; i++)
    {
        if (s[i].roll==f)
        {
            printf("Roll no. Name                 Marks\n");
            printf("%-8d %-20s %.2f\n", s[i].roll, s[i].name, s[i].marks);
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("Student with roll number %d not found.\n", f);
    }
    return 0;
}