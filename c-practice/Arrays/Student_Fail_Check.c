#include <stdio.h>
void check(int n){
    int marks[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter the marks of %d student:",i+1);
        scanf("%d",&marks[i]);
    }
    printf("Students who have failed their roll numbers are:");
    for (int i = 0; i <n; i++)
    {
        if (marks[i]<35)
        {
            printf("%d ",i+1);
        } 
    }   
}
int main(){
    int n;
    printf("enter the number of studnts whom marks you want to enter:");
    scanf("%d",&n);
    check(n);
    return 0;
}