#include <stdio.h>
int main(){
    int a;
    int b;
    printf("enter the base number:");
    scanf("%d",&a);
    printf("enter the power:");
    scanf("%d",&b);
    int sol=1;
    for (int i = 1; i <=b; i++)
    {
        sol=sol*a;
    } 
    printf("the solution is %d",sol);
    return 0;
}