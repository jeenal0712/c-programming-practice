//Create a structure type Person with name, salary, and age as its attributes. Declare and initialize 2 variables of this structure. Print the name of the first person and the age of the second person.
#include <stdio.h>
#include <string.h>
int main(){
    struct person{
        char name[50];
        float sal;
        int age;
    }a,b;
    
    strcpy(a.name,"Manav");
    a.sal=50000.00;
    a.age=27;

    strcpy(b.name,"Anjali");
    b.sal=100000.00;
    b.age=25;

    printf("Name of first person:%s\n",a.name);
    printf("Age of second person:%d\n",b.age);
    
    return 0;
}