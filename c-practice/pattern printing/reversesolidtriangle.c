#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines:");
    scanf("%d",&n);
    for (int i = n; i >=1; i=i-1)
    {   int a=i;
        while (a!=0)
        {
            printf("*");
            a=a-1;
        }
        printf("\n");
    }
    return 0;
}