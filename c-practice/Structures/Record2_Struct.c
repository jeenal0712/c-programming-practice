//Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course, Year of joining. Create 2 structure variables. Now, create a function to check if two students have the same Department. Pass the two structure variables as input to this function.
#include <stdio.h>
#include <string.h>
typedef struct Studentdata
{
    int rollno;
    char name[20];
    char department[50];
    char course[30];
    int yofjoin;
}student;
void checkdepartment(student a,student b)
{
    if (strcmp(a.department, b.department)==0)
    {
        printf("Yes! they are of same department.");
    }
    else
    {
        printf("No, they are not of same department.");
    }
}

int main(){
    student x;
    x.rollno=1298;
    strcpy(x.name,"Abhay Singh");
    strcpy(x.department,"computer science");
    strcpy(x.course,"btech");
    x.yofjoin=2025;

    student y;
    y.rollno=1569;
    strcpy(y.name,"Stuti Singh");
    strcpy(y.department,"computer science");
    strcpy(y.course,"bca");
    y.yofjoin=2024;

    checkdepartment(x,y);

    return 0;
}