#include <stdio.h>
int main(){
    /* manually enter till where u want the series
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a=100;
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",a);
        a=a-3;
    }*/
    // now print till the positive number without manually entering
    int a=100;
    for (int i = 1; a>0; i++)
    {
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}