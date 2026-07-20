//Find the youngest person from a list of people.
#include <stdio.h>
#include <limits.h>
typedef struct person
{
    char name[50];
    int age;
}peo;
int main(){
    int n;
    printf("Enter the number of records u want to store:");
    scanf("%d",&n);

    peo p[n];
    
    for (int i = 0; i <n; i++)
    {
        printf("Enter the name of person %d:",i+1);
        scanf(" %[^\n]s",p[i].name);
        printf("Enter age of person %d:",i+1);
        scanf("%d",&p[i].age);
    }
    
    int min=INT_MAX;
    for ( int i = 0; i <n; i++)
    {
        if (min>p[i].age)
        {
            min=p[i].age;
        }
    }
    
    printf("\nThe Youngest is/are:\n");
    printf("Name       Age\n");
    for (int i = 0; i <n; i++)
    {
        if (p[i].age==min)
        {
            printf("%-10s %d\n",p[i].name, p[i].age);
        }   
    }
    
    return 0;
}
