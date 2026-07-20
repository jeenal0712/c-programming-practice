//Store n students and display them in descending order of marks.
#include <stdio.h>
#include <string.h>
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

    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            if (s[j].marks<s[j+1].marks)
            {
                std temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            } 
        }
    }
    printf("Roll no. Name                 Marks\n");
    for (int i = 0; i <n; i++)
    {
        printf("%-8d %-20s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    
    return 0;
}
    
